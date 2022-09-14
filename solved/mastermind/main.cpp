#include <iostream>
using namespace std;

int main(void) {

    int l; string code, guess;
    cin >> l >> code >> guess;
    int r = 0, s = 0;
    // find r...
    for(int c = 0; c < l; c++) {
        if(code[c] == guess[c]) {
            r++;
            code[c] = '-'; guess[c] = '-';
        }
    }
    // find s...
    for(int c = 0; c < l; c++) {
        for(int cc = 0; cc < l; cc++) {
            if(code[c] == '-' || guess[cc] == '-') continue;
            if(code[c] == guess[cc]) {
                s++;
                code[c] = '-'; guess[cc] = '-';
            }
        }
    }
    cout << r << " " << s << endl;

    return 0;
}