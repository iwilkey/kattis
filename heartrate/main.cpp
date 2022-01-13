// Accepted

#include <iostream>
#include <bitset>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define trav(x, y) for(int x = 0; x < y; x++)
#define travi(x, i, y) for(int x = i; x < y; x++)
template <typename T> void log(string tag, T obj) { cout << tag << " " << obj << endl; }

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

void solve() {
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		static float b, p, bpm; cin >> b >> p;
		bpm = (60.0f * b) / p;
		cout << bpm - (bpm / b) << " " << bpm << " "
			 << bpm + (bpm / b) << endl;
	}
	return;
}

int main() {
	initIO(5);
	solve();
	return 0;
}
