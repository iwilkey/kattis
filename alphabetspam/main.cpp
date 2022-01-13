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

uint8_t type(char c) {
	if(c - '_' == 0) return 0; // whitespace
	else if(c - 'a' >= 0 && c - 'a' < 26) return 1; // lowercase
	else if(c - 'A' >= 0 && c - 'A' < 26) return 2; // uppercase 
	else return 3; // symbols
}

void solve() {
	string in; cin >> in;
	int types[4] = { 0 };
	trav(c, in.size()) types[type(in[c])]++;
	trav(t, 4) cout << types[t] / (double)in.size() << endl;
	return;
}

int main() {
	initIO(12);
	solve();
	return 0;
}
