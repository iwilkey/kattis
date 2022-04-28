// Accepted

#include <iostream>
#include <string>
using namespace std;

int main() {
	string in; cin >> in;
	for(int c = 0; c < in.size() - 1; c++) {
		if(in[c] == in[c + 1] && in[c] == 's') {
			cout << "hiss" << endl;
			return 0;
		}
	} 
	cout << "no hiss" << endl;
	return 0;
}
