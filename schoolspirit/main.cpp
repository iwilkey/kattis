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

double average(vector<int> l) {
    double ret;
    for(int i = 0; i < l.size(); i++) 
        ret += l[i] * pow(4 / 5.0f, i);
    return (1 / 5.0f) * ret;
}

void solve(void) {

    int p; cin >> p;
    vector<int> scores;
    for(int i = 0; i < p; i++) {
        static int s; cin >> s;
        scores.push_back(s);
    }

    cout << average(scores) << endl;

    double run = 0.0f;
    for(int i = 0; i < scores.size(); i++) {
        vector<int> sub;
        for(int ii = 0; ii < scores.size(); ii++) {
            if(i == ii) continue;
            sub.push_back(scores[ii]);
        }
        run += average(sub);
    }

    cout << run / scores.size() << endl;

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
    initIO(6);
    solve();
    return 0;
}
