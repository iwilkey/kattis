// Accepted

#include <iostream>
#include <math.h>
using namespace std;

#define _USE_MATH_DEFINES

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

int main() {
	initIO(6);
	while(true) {
		float r, m, c; cin >> r >> m >> c;
		if(r == 0 && m == 0 && c == 0) break;
		cout << (M_PI) * pow(r, 2.0f) << " ";
		cout << (c / m) * pow((2 * r), 2) << endl;
	}
	return 0;
}
