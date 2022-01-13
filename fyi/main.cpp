// Accepted

#include <iostream>
#include <string>
using namespace std;

int main() {
	string in;
	getline(cin, in);
	if(in.substr(0, 3) == "555") cout << 1;
	else cout << 0;
	cout << endl;
	return 0;
}
