// Accepted

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int n; cin >> n;
	cin.ignore();
	long long int x = 0;
	for(int i = 0; i < n; i++) {
		static string line;
		getline(cin, line);
		x += pow(stoi(line.substr(0, line.size() - 1)),
			 (int)line[line.size() - 1] - '0');
			 
	}
	cout << x << endl;
	return 0;
}
