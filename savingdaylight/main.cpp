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

vector<string> tokenize(string line, char delim) {
    vector<string> ret;
    stringstream check(line);
    string imme;
    while(getline(check, imme, delim))
        ret.push_back(imme);
    return ret;
}

// return time difference in hours, mins.
pair<int, int> convert(string t1, string t2) {
    vector<string> time1 = tokenize(t1, ':'), time2 = tokenize(t2, ':');
    int h1 = stoi(time1[0]), h2 = stoi(time2[0]), m1 = stoi(time1[1]), m2 = stoi(time2[1]);
    if(m2 - m1 < 0) return make_pair(h2 - h1 - 1, 60 + (m2 - m1));
    else return make_pair(h2 - h1, m2 - m1);
}

void solve(void) {

    while(!cin.eof()) {
        string line;
        getline(cin, line);
        vector<string> tokens;
        tokens = tokenize(line, ' ');

        pair<int, int> time = convert(tokens[3], tokens[4]);
        cout << tokens[0] << " " << tokens[1] << " " << tokens[2] << " " 
            << time.first << " hours " << time.second << " minutes" << endl;

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
