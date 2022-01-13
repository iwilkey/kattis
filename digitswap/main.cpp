// Accepted

#include <iostream>
using namespace std;

int main() {
	string line;
	getline(cin, line);
	char temp = line[0];
	line[0] = line[1];
	line[1] = temp;
	cout << line << endl;
	return 0;
}
