#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {

	vector<string> board;
	for(int i = 0; i < 7; i++) {
		static string line;
		getline(cin, line);
		board.push_back(line);
	}

	int moves = 0;
	for(int y = 0; y < 7; y++) {
		for(int x = 0; x < 7; x++) {
			string lookat = "";
			if(y >= 2) {
				for(int yy = 0; yy < 3; yy++) 
					lookat.push_back(board[y - yy][x]);
				if(lookat == "oo.") moves++;
			}

			lookat = "";
			if(y <= 4) {
				for(int yy = 0; yy < 3; yy++) 
					lookat.push_back(board[y + yy][x]);
				if(lookat == "oo.") moves++;
			}

			lookat = "";
			if(x >= 2) {
				for(int xx = 0; xx < 3; xx++) 
					lookat.push_back(board[y][x - xx]);
				if(lookat == "oo.") moves++;
			}

			lookat = "";
			if(x <= 4) {
				for(int xx = 0; xx < 3; xx++) 
					lookat.push_back(board[y][x + xx]);
				if(lookat == "oo.") moves++;
			}
		}
	}

	cout << moves << endl;

	return 0;
}