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

bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
    int xn = max(x1, min(xc, x2));
    int yn = max(y1, min(yc, y2));
    int dx = xn - xc;
    int dy = yn - yc;
    return (dx * dx + dy * dy) <= r * r;
}

void solve(void) {
    float x, y, x1, y1, x2, y2; 
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    float r = 0.0f;
    while(true) {
        r += 0.0001f;
        if(checkOverlap(r, x, y, x1, y1, x2, y2)) break;
    }
    cout << r << endl;
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
