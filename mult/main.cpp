#include <iostream>
using namespace std;

int main() {
	int cases, base; cin >> cases;
	bool nB = true;
	for(int i = 0; i < cases - 1; i++) {
		static int num;
		cin >> num;
		if(nB) {
			base = num;
			nB = false;
			continue;
		}
		if(num % base == 0) {
			cout << num << endl;
			nB = true;
		}
	}
	return 0;
}
