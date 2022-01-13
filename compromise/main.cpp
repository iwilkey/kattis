// Accepted

#include <iostream>
#include <vector>
using namespace std;

void solve() {

	int n, m; cin >> n >> m;
	cin.ignore();
	vector< vector<int> > grid;
	for(int nn = 0; nn < n; nn++) {
		string line; cin >> line;
		vector<int> bi;
		for(int c = 0; c < m; c++)
			bi.push_back((int)(line[c] - '0'));
		grid.push_back(bi);
	}

	// for grid at (x, y), use grid[y][x].
	string ret;
	int count = 0;
	for(int issue = 0; issue < m; issue++) {
		count = 0;
		for(int y = 0; y < n; y++)
			if(grid[y][issue]) count++;
		ret += (count > ((double)n / 2)) ? '1' : '0';
	}

	cout << ret << endl;

	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cases; cin >> cases;
	for(int i = 0; i < cases; i++)
		solve();
	return 0;
}
