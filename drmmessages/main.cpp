// Accepted

#include <iostream>
using namespace std;

int main() {
	string line, haves[2]; 
	cin >> line;
	haves[0] = line.substr(0, line.size() / 2);
	haves[1] = line.substr(line.size() / 2, line.size() / 2);
	int values[2] = { 0, 0 };
	for(int run = 0; run < 2; run++) {
		for(int i = 0; i < 2; i++) 
			for(int c = 0; c < line.size() / 2; c++) {
				if(run == 0) values[i] += ((int)haves[i][c] - (int)'A');
				else haves[i][c] = (char)(((((int)haves[i][c] - (int)'A') 
					+ values[i]) % 26) + (int)'A');
			}
	}
	for(int c = 0; c < line.size() / 2; c++) 
		haves[0][c] = (((((int)haves[0][c] 
				- (int)'A') + ((int)haves[1][c] - (int)'A')) % 26) + (int)'A');	
	cout << haves[0] << endl;
	return 0;
}
