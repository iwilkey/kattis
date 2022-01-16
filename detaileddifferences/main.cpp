// Accepted

#include <iostream>
using namespace std;

int main() {	
	int c; cin >> c;
	cin.ignore();
	for(int i = 0; i < c; i++) {
		string lines[2];
		for(int ii = 0; ii < 2; ii++)
			getline(cin, lines[ii]);
		cout << lines[0] << endl;
		cout << lines[1] << endl;
		for(int c = 0; c < lines[0].size(); c++) {
			if(lines[0][c] != lines[1][c])
				cout << "*";
			else cout << ".";
		}
		cout << "\n\n";
	}
	return 0;
}
