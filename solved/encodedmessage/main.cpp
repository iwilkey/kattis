// Accepted

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int c; cin >> c;
	cin.ignore();
	for(int i = 0; i < c; i++) {
		string line;
		getline(cin, line);
		string builder = line;
		int dim = (int)pow(line.size(), 0.5f);
		for(int y = 0; y < dim; y++)
			for(int x = 0; x < dim; x++)
				builder[x + (y * dim)] = line[y + ((dim - x - 1) * dim)];
		for(int c = builder.size() - 1; c >= 0; c--) cout << builder[c];
		cout << endl;
	}
	return 0;
}
