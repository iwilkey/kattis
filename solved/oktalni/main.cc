#include <iostream>
#include <algorithm>
#include <bitset>
#include <string>
using namespace std;

int main(void) {
    string bin; 
    cin >> bin;
    while(bin.size() % 3 != 0)
        bin.insert(bin.begin(), '0');
    for(int i = 0; i <= bin.size() - 3; i += 3) {
        bitset<3> bit(bin.substr(i, 3));
        cout << bit.to_ulong();
    }
    cout << endl;
}
