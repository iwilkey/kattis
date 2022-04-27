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

    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    if(line1 == "0" || line2 == "0") cout << 0 << endl;
    else {
        int s1 = 0, s2 = 0;
        for(char c : line1) if(c == 'S') s1++;
        for(char c : line2) if(c == 'S') s2++;
        string ret;
        for(int i = 0; i < s1 * s2; i++) {
            ret.push_back('S');
            ret.push_back('(');
        }
        for(int i = 0; i <= s1 * s2; i++) {
            if(i == 0) ret.push_back('0');
            else ret.push_back(')');
        }
        cout << ret << endl;
    }

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
