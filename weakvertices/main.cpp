// Working currently.

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> weak;
	static int n;
	while(true) {
		weak.clear();
		cin >> n;
		if(n == -1) break;
		vector< vector<bool> > map;
		for(int y = 0; y < n; y++) {
			vector<bool> line;
			for(int x = 0; x < n; x++) {
				static int in; cin >> in;
				line.push_back(in);
			}
			map.push_back(line);
		}

		for(int vert = 0; vert < in; vert++) {

		}

	}

	return 0;
}
