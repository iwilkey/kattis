// Accepted

#include <iostream>
#include <math.h>
using namespace std;

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

int main() {
	initIO(10);

	/*
		Since all the two interior angles in Bretschnider's formula
		must sum to pi (180), that formula simplifies to

		k^2 = (s - a)(s - b)(s - c)(s - d), 
			where s is the semi-perimeter (a + b + c + d) / 2 and k
			is the maximum area of any quad you can create with side lengths
			abcd.
	*/

	int sides[4];
	float s = 0.0f, k = 0.0f;
	for(int i = 0; i < 4; i++) {
		cin >> sides[i];
		s += sides[i];
	}
	s /= 2;
	k = pow((s - sides[0]) * (s - sides[1]) 
		* (s - sides[2]) * (s - sides[3]), 0.5f);
	cout << k << endl;
	return 0;
}
