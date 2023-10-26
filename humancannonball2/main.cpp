// Accepted

#include <iostream>
#include <math.h>
using namespace std;

#define _USE_MATH_DEFINES

int main() {
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		float vars[5] = { 0.0f };
		for(int ii = 0; ii < 5; ii++)
			cin >> vars[ii];
		float vX = (cos(vars[1] * (M_PI / 180.0f)) * vars[0]),
			vY = (sin(vars[1] * (M_PI / 180.0f)) * vars[0]),
			t = vars[2] / vX,
			yI = (vY * t) - ((0.5f) * (9.81f) * pow(t, 2));
		bool safe = yI >= vars[3] + 1 && yI <= vars[4] - 1;
		cout << ((safe) ? "Safe" : "Not Safe") << endl;
	}
	return 0;
}
