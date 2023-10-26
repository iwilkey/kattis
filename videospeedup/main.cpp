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

    int n, p, k; cin >> n >> p >> k;
    vector<int> ts;
    for(int i = 0; i < n; i++) {
        static int t; cin >> t;
        ts.push_back(t);
    }
    ts.push_back(k);

    float pp = 1.0f + ((n * p) / 100.0f),
        regTime = 0.0f;
    for(int i = n - 1; i >= 0; i--) {
        regTime += (ts[i + 1] - ts[i]) * pp;
        n--; pp = 1.0f + ((n * p) / 100.0f);
    }
    regTime += ts[0];
    cout << regTime << endl;

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
