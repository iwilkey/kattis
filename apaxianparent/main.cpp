#include <iostream>
using namespace std;

int main() {
	string y, p; 
	cin >> y >> p;
	switch(y[y.size() - 1]) {
		case 'e':
			cout << y << "x" << p << endl;
			break;
		case 'a': case 'i': case 'o': case 'u':
			cout << y.substr(0, y.size() - 1) << "ex" << p << endl;
			break;
		default:
			if(y.substr(y.size() - 2, 2) == "ex") 
				cout << y << p << endl;
			else cout << y << "ex" << p << endl;
	}
	return 0;
}
