// Accepted

#include <iostream>
using namespace std;

int main() {
	int ca; cin >> ca;
	for(int i = 0; i < ca; i++) {
		static int strips, outl = 0; cin >> strips;
		outl = 0;
		for(int ii = 0; ii < strips; ii++) {
			static int out; cin >> out;
			outl += out;
		}
		cout << outl - (strips - 1) << endl;
	}
	return 0;
}
