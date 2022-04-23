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

const string keyboard[3] = {
    "qwertyuiop",
    "asdfghjkl",
    "zxcvbnm"
};

int distance(char a, char b) {
    bool found[2] = { false, false };
    int vertL[2] = { -1, -1 }, horL[2] = { -1, -1 };
    for(int vert = 0; vert < 3; vert++) {
        static string line;
        line = keyboard[vert];
        for(int hor = 0; hor < line.size(); hor++) {
            if(line[hor] == a && !found[0]) {
                horL[0] = hor;
                vertL[0] = vert;
                found[0] = true;
            }
            if(line[hor] == b && !found[1]) {
                horL[1] = hor;
                vertL[1] = vert;
                found[1] = true;
            }
        }
    }
    return abs(horL[1] - horL[0]) + abs(vertL[1] - vertL[0]);
}

void solve(void) {

    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        static string word; 
        static int num;
        cin >> word >> num;
        vector< pair<int, string> > list;
        for(int w = 0; w < num; w++) {
            static string test;
            cin >> test;
            int dst = 0;
            for(int c = 0; c < word.size(); c++) 
                dst += distance(word[c], test[c]);
            list.push_back(make_pair(dst, test));
        }
        sort(list.begin(), list.end());
        for(pair<int, string> entry : list) 
            cout << entry.second << " " << entry.first << endl;
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
