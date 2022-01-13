// Accepted

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long int blocks, h = 0, sl = 1; cin >> blocks;
	while(true) {
		blocks -= pow(sl, 2);
		if(blocks < 0) break;
		h++;
		sl += 2;
	}
	cout << h << endl;
	return 0;
}
