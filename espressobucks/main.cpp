#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	int width, height;
	cin >> height >> width;
	cin.ignore();
	vector<string> map;
	for(int i = 0; i < height; i++) {
		static string in;
		getline(cin, in);
		map.push_back(in);
	}

	for(int y = 0; y < height; y++) {
		for(int x = 0; x < width; x++) {
			if(map[y][x] == '.') {
				if(y >= 1)
					if(map[y - 1][x] == 'E')
						continue;
				if(y < height - 1)
					if(map[y + 1][x] == 'E')
						continue;
				if(x >= 1)
					if(map[y][x - 1] == 'E')
						continue;
				if(x < width - 1)
					if(map[y][x + 1] == 'E')
						continue;
				map[y][x] = 'E';
			}
		}
	}

	for(int y = 0; y < height; y++) {
		for(int x = 0; x < width; x++)
			cout << map[y][x];
		cout << endl;
	}
	
	return 0;
}
