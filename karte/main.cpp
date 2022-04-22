// @author Ian Wilkey (iwilkey)

#include <iostream>
#include <string>
#include <bitset>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

#define _USE_MATH_DEFINES

template <typename T> 
void log(string tag, T obj) { 
    cout << tag << ": " << obj << endl; 
}

void solve(void) {

    string cards;
    getline(cin, cards);

    int log[4][13] = { 0 };
    for(int c = 0; c <= cards.size() - 3; c += 3) {
        char suit = cards[c];
        int num = stoi(cards.substr(c + 1, 2)) - 1,
            ID = -1;
        switch(suit) {
            case 'P': ID = 0; break;
            case 'K': ID = 1; break;
            case 'H': ID = 2; break;
            case 'T': ID = 3; break;
        }
        if(log[ID][num] == 1000) {
            cout << "GRESKA" << endl;
            return;
        }
        log[ID][num] = 1000;
    }

    for(int i = 0; i < 4; i++) {
        int missing = 0;
        for(int ii = 0; ii < 13; ii++) {
            if(log[i][ii] != 1000) 
                missing++;
        }
        cout << missing << " ";
    }
    cout << endl;

    return;
}

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

int main(int argc, char ** args) {
    initIO(1);
    solve();
    return 0;
}
