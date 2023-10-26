#include <iostream>
using namespace std;

int main() {
	string line;
	getline(cin, line);
	for(int c = 0; c < line.size() - 1; c++)
		for(int cc = c + 1; cc < line.size(); cc++)
			if(line[c] == line[cc]) {
				cout << "0" << endl;
				return 0;
			}
	cout << "1" << endl;
	return 0;
}
