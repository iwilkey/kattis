// Accepted

#include <iostream>
#include <bitset>
#include <algorithm>
#include <utility>
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
	int n, run = -1;
	while(true) {
		cin >> n;
		if(n == 0) break;
		static int inp;
		pair< vector<int>, vector<int> > vecs;
		for(int run = 0; run < 2; run++) {
			for(int i = 0; i < n; i++) {
				cin >> inp;
				if(!run) vecs.first.push_back(inp);
				else vecs.second.push_back(inp);
			}	
		}
		vector<int> origFirst = vecs.first,
			second;
		for(int i = 0; i < n; i++) second.push_back(0);

		sort(vecs.first.begin(), vecs.first.end());
		sort(vecs.second.begin(), vecs.second.end());
		for(int i = 0; i < n; i++) {
			static int coor;
			coor = vecs.first[i];
			for(int ii = 0; ii < n; ii++) {
				if(origFirst[ii] == coor) {
					second[ii] = vecs.second[i];
					continue;
				}
			}
		}

		for(int i = 0; i < n; i++) {
			cout << second[i] << endl;
		}
		if(run != 0) cout << endl;
		run++;
	}

	return;	
}

int main() {
	initIO(1);
	solve();
	return 0;
}
