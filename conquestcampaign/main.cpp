#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char ** args) {

	int r, c, w; cin >> r >> c >> w;
	vector< vector<int> > map;
	for(int rr = 0; rr < r; rr++) {
		vector<int> row;
		for(int cc = 0; cc < c; cc++)
			row.push_back(0);
		map.push_back(row);
	}

	for(int ww = 0; ww < w; ww++) {
		static int r, c; cin >> r >> c;
		map[r - 1][c - 1] = 1;
	}

	int days = 1;
	while(true) {
		vector< pair<int, int> > tbc;
		for(int rr = 0; rr < r; rr++) {
			for(int cc = 0; cc < c; cc++) {

				if(map[rr][cc])
					map[rr][cc] = 2;

				if(map[rr][cc] == 2) {
					if(rr != 0)
						if(map[rr - 1][cc] == 0) 
							tbc.push_back(make_pair(rr - 1, cc));
					if(rr != r - 1)
						if(map[rr + 1][cc] == 0) 
							tbc.push_back(make_pair(rr + 1, cc));
					if(cc != 0)
						if(map[rr][cc - 1] == 0) 
							tbc.push_back(make_pair(rr, cc - 1));
					if(cc != c - 1)
						if(map[rr][cc + 1] == 0) 
							tbc.push_back(make_pair(rr, cc + 1));
				}
			}
		}

		for(pair<int, int> p : tbc) 
			map[p.first][p.second] = 1;

		bool done = true;
		for(int rr = 0; rr < r; rr++) {
			for(int cc = 0; cc < c; cc++) {
				if(map[rr][cc] == 0 || map[rr][cc] == 1) {
					done = false;
					break;
				}
			}
		}

		if(done) break;
		days++;
	}

	cout << days << endl;

	return 0;
}
