#include <iostream>
#include <math.h>
using namespace std;

int main(void) {

	int s; cin >> s;
	for(int d = 0; d < s; d++) {
		static int ps;
		ps = pow(2, d);
		if(ps >= s) {
			cout << d + 1 << endl;
			break;
		}
	}

	return 0;
}
