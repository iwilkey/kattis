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

    int r, c, zr, zc;
    cin >> r >> c >> zr >> zc;
    cin.ignore();
    vector<string> map;
    for(int i = 0; i < r; i++) {
        static string in;
        getline(cin, in);
        map.push_back(in);
    }
    
    for(int y = 0; y < r; y++) 
        for(int ry = 0; ry < zr; ry++) {
            for(int x = 0; x < c; x++) 
                for(int rx = 0; rx < zc; rx++)
                    cout << map[y][x];
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
