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

    string line;
    getline(cin, line);

    int ss = line.size() / 3;
    string s[3] = { line.substr(0, ss),
        line.substr(ss, ss),
        line.substr((ss * 2), ss) };

    for(int i = 0; i < 3; i++) {
        for(int ii = i; ii < 3; ii++) {
            if(i == ii) continue;
            if(s[i] == s[ii]) {
                cout << s[ii] << endl;
                return;
            }
        }
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
