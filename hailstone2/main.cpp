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

int hailstoneLength(long long int n) {
	long long int curr = n, last = n;
	int c = 1;
	while(true) {
		if(last == 1) break;
		curr = (last % 2 == 0) ? last / 2 
			: (3 * last) + 1;
		c++;
		last = curr;
	}
	return c;
}

void solve() {
	long long int in; cin >> in;
	cout << hailstoneLength(in) << endl;
	return;
}

int main() {
	initIO(1);
	solve();
	return 0;
}
