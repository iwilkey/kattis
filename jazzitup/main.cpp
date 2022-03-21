#include <iostream>
#include <math.h>
using namespace std;

bool ndk2(int p) {
	for(int k = 2; k <= p; k++) {
		float quot = (float)p / pow(k, 2);
		if(quot == (int)quot)
			return false;
	}
	return true;
}

int main(void) {

	int n;
	cin >> n;

	// I need to select an m such that (m * n = p) 
	// 	where p / some k^2 isn't evenly divisible.
	for(int m = 2; m < n; m++) {
		static int p;
		p = m * n;
		if(ndk2(p)) {
			cout << m << endl;
			return 0;
		}
	}

	return 0;
}