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
	initIO(7);
	
	/*
		Treating this as an infinite series...

		x^(x^(x^x^...x)) = a
		is the same as x^a = a
		loga(x^a) = loga(a)
		loga(x) = loga(a)
		loga(x) = 1 / a

		yielding... [ x = a ^ (1 / a) ]
	*/

	double a; cin >> a;
	cout << pow(a, (1.0f / a)) << endl;
	return 0;
}
