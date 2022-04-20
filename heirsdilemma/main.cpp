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

bool check(int i) {
    string s = to_string(i);
    for(int c = 0; c < s.size(); c++) {
        if(s[c] == '0') return false;
        for(int cc = 0; cc < s.size(); cc++) {
            if(c == cc) continue;
            if(s[c] == s[cc]) return false;
        }
    }
    
    for(char n : s) 
        if(i % (int)(n - '0')) 
            return false;
    return true;
}

void solve(void) {
    int l, h; cin >> l >> h;
    int com = 0;
    for(int i = l; i <= h; i++) 
        if(check(i))
            com++;
    cout << com << endl;
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
