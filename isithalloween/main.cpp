// Accepted

#include <iostream>
using namespace std;

int main() {
	string in;
	getline(cin, in);
	if(in == "OCT 31" || in == "DEC 25") cout << "yup";
	else cout << "nope";
	cout << endl;
	return 0;
}