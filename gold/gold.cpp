#include <iostream>
#include <vector>
using namespace std;

int width, height;
vector<vector<char>> map;
vector<vector<bool>> safe; 

int main() {
	cin >> width >> height;
	map.resize(height, vector<char>(width));
	safe.resize(height, vector<bool>(width, false));
	for(int i = 0; i < height; i++) {
		for(int j = 0; j < width; j++) {
			cin >> map[i][j];
		}
	}
	
	return 0;
}