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

const int dx[8] = { 1, 1, 0, -1, -1, -1, 0, 1 },
    dy[8] = { 0, -1, -1, -1, 0, 1, 1, 1 };

void fcc(int cells, vector<string> & map, int x, int y, int w, int h) {
    map[y][x] = cells + '0';
    for(int move = 0; move < 8; move++) {
        int xx = x + dx[move],
            yy = y + dy[move];
        if(xx <= -1) continue;
        if(xx >= w) continue;
        if(yy <= -1) continue;
        if(yy >= h) continue;
        if(map[yy][xx] == '#')
            fcc(cells, map, xx, yy, w, h);
    }
    return;
}

void solve(void) {

    int h, w; cin >> h >> w;
    cin.ignore();
    vector<string> map;
    for(int y = 0; y < h; y++) {
        static string in;
        getline(cin, in);
        map.push_back(in);
    } 

    int cells = 0;
    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            if(map[y][x] == '#') {
                fcc(cells, map, x, y, w, h);
                cells++;
            }
        }
    }

    cout << cells << endl;
    
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
