// ACCEPTED

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int w, h; cin >> h >> w;
	cin.ignore();
	vector< vector<char> > grid;
	for(int y = 0; y < h; y++) {
		static vector<char> to;
		to.clear();
		static string line;
		getline(cin, line);
		for(int x = 0; x < w; x++)
			to.push_back(line[x]);
		grid.push_back(to);
	}

	int cars[5] = { 0 };
	for(int y = 0; y < h - 1; y++) {
		for(int x = 0; x < w - 1; x++) {
			int addTemp = 0;
			bool wall = false;
			for(int yy = 0; yy < 2; yy++) {
				for(int xx = 0; xx < 2; xx++) {
					static char lookat;
					lookat = grid[y + yy][x + xx];
					if(lookat == '#') {
						wall = true;
						goto out;
					} else if(lookat == 'X') addTemp++;

				}
			}
			out:;
			if(wall) continue;
			cars[addTemp]++;
		}
	}

	for(int i = 0; i < 5; i++)
		cout << cars[i] << endl;
	
	return 0;
}
