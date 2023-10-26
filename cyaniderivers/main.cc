#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    string bin;
    cin >> bin;
    int longest = 0,
        zr = 0;
    for(int i = 1; i < bin.size(); i++) {
        if(bin[i] == '1') {
            zr = ceil(zr / 2.0f);
            if(longest < zr) 
                longest = zr;
            zr = 0;
        } else if(i == bin.size() - 1) {
            if(longest < zr) 
                longest = zr + 1;
        } else zr++;
    }
    cout << longest << endl;
    return 0;
}
