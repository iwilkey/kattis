#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int l, r; cin >> l >> r;
	cout << ((pow(pow(l, 2) + pow(l, 2), 0.5f) 
		<= r * 2) ? "fits" : "nope") << endl;
	return 0;
}
