// Accepted

#include <iostream>
#include <string>
using namespace std;

int main() {	
	string in; cin >> in;
	bool lastS = false;
	for(char c : in) {
		if(c == 's' and not lastS) lastS = true;
		else if(c == 's' and lastS) {
			cout << "hiss" << endl;
			return 0;
		} else lastS = false;
	}
	cout << "no hiss" << endl;
	return 0;
}
