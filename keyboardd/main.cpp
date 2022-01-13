// Accepted

#include <iostream>
#include <bitset>
#include <string>
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

bool in(string i, char c) {
	for(int cc = 0; cc < i.size(); cc++)
		if(i[cc] == c) return true;
	return false;
}

void solve() {
	string phrase,
		actual,
		repeated;
	getline(cin, phrase);
	getline(cin, actual);

	int i = 0;
	while(true) {
		if(i >= actual.size()) break;
		if(phrase[i] == actual[i]) {
			i++;
			continue;
		}
		static char c;
		c = actual[i];
		if(!in(repeated, c))
			repeated += c;
		actual.erase(i, 1);
	}

	cout << repeated << endl;

	return;	
}

int main() {
	initIO(1);
	solve();
	return 0;
}
