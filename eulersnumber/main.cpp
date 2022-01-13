// Accepted

#include <iostream>
#include <bitset>
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

long double e(int n) {
	long double ret = 0.0f;
	for(int i = 0; i <= n; i++) 
		ret += (1 / tgamma(i + 1));
	return ret;
}

void solve() {
	int in; cin >> in;
	cout << e(in) << endl;
	return;	
}

int main() {
	initIO(32);
	solve();
	return 0;
}
