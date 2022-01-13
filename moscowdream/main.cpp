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

void solve() {
	int a, b, c, n;
	cin >> a >> b >> c >> n;

	if(n < 3) {
		cout << "NO" << endl;
		return;
	}

	for(int i = 0; i <= a; i++) {
		for(int j = 0; j <= b; j++) {
			for(int k = 0; k <= c; k++) {
				if(i + j + k == n) {
					if(i >= 1 && j >= 1 && k >= 1) {
						cout << "YES" << endl;
						return;
					}
				}
			}
		}
	}
	cout << "NO" << endl;
	return;
}

int main() {
	initIO(1);
	solve();
	return 0;
}
