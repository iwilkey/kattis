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

const pair<int, string> pad[9] = {
    make_pair(0, " "),
    make_pair(2, "abc"),
    make_pair(3, "def"),
    make_pair(4, "ghi"),
    make_pair(5, "jkl"),
    make_pair(6, "mno"),
    make_pair(7, "pqrs"),
    make_pair(8, "tuv"),xw
    make_pair(9, "wxyz")
};

pair<int, int> lookfor(char c) {
    for(pair<int, string> entry : pad) {
        int ccc = 1;
        for(char cc : entry.second) {
            if(cc == c) 
                return make_pair(entry.first, ccc);
            ccc++;
        }
    }
    return make_pair(-1, -1);
}

void solve(void) {

    int c; cin >> c;
    cin.ignore();
    for(int i = 0; i < c; i++) {
        cout << "Case #" << i + 1 << ": ";
        string line;
        getline(cin, line);
        int lastNum = -1;
        for(char cc : line) {
            pair<int, int> info = lookfor(cc);
            if(info.first == lastNum) cout << " ";
            lastNum = info.first;
            for(int ii = 0; ii < info.second; ii++) cout << info.first;
        }
        cout << endl;
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
