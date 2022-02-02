// Accepted

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

		for(int vert = 0; vert < n; vert++) {
			bool bad = true;
			for(int i = 0; i < n; i++) {
				if(!map[vert][i]) continue;
				for(int j = i + 1; j < n; j++) {
					if(!map[vert][j]) continue;
					if(map[i][j]) {
						bad = false;
						goto out;
					}
				}
			}
			out:;
			if(bad) weak.push_back(vert);
		}

		for(int i = 0; i < weak.size(); i++)
			cout << weak[i] << " ";
		cout << endl;
	}

	return 0;
}
