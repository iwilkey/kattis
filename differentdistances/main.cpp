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

    while(true) {
        float x1, y1, x2, y2, p;
        cin >> x1;
        if(x1 == 0) break;
        cin >> y1 >> x2 >> y2 >> p;
        cout << (pow(pow(abs(x1 - x2), p) + pow(abs(y1 - y2), p), 1.0 / p)) << endl;
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
    initIO(10);
    solve();
    return 0;
}
