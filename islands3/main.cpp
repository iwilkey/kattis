// Accepted

#include <iostream>
#include <string>
#include <vector>
using namespace std;

static const vector<int> dx = { 1, -1, 0, 0 };
static const vector<int> dy = { 0, 0, -1, 1 };
static int width, height;
static vector<vector<char>> map;
static vector<vector<bool>> visited;

void findConnectedComponents(int i, int j) {
	if(visited[i][j]) return;
	visited[i][j] = true;
	for(int dir = 0; dir < 4; dir++) {
		int newI = i + dx[dir];
		int newJ = j + dy[dir];
		if(newI < 0) continue;
		if(newJ < 0) continue;
		if(newI >= height) continue;
		if(newJ >= width) continue;
		if(map[newI][newJ] == 'C' or map[newI][newJ] == 'L') 
			findConnectedComponents(newI, newJ);
	}
}

int main() {
	cin >> height >> width;
	map.resize(height, vector<char>(width));
	for(int i = 0; i < height; i++) {
		for(int j = 0; j < width; j++) {
			cin >> map[i][j];
		}
	}
	visited.resize(height, vector<bool>(width, false));
	int islands = 0;
	for(int i = 0; i < height; i++) {
		for(int j = 0; j < width; j++) {
			if(!visited[i][j] && map[i][j] == 'L') {
				findConnectedComponents(i, j);
				islands++;
			}
		}
	}
	cout << islands << endl;
	return 0;
}
