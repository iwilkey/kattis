#include <iostream>
using namespace std;

int main(void) {
    int b, won = 0; cin >> b;
    for(int i = 0; i < b; i++) {
        static string in;
        cin >> in;
        for(int c = 0; c < in.size() - 1; c++) 
            if(in.substr(c, 2) == "CD")
                goto lost;
        won++;
        lost:;
    }
    cout << won << endl;
    return 0;
}