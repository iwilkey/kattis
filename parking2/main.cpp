// Accepted

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int c; cin >> c;
	for(int i = 0; i < c; i++) {
		static int s; cin >> s;
		static vector<int> dist;
		dist.clear();
		for(int ii = 0; ii < s; ii++) {
			static int d; cin >> d;
			dist.push_back(d);
		}
		sort(dist.begin(), dist.end());
		int dis = dist[s - 1] - dist[0];
		cout << dis * 2 << endl;
	}
	return 0;
}
