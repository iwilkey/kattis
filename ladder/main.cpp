// Accepted

#include <iostream>
#include <math.h>
using namespace std;

#define _USE_MATH_DEFINES

int main() {
	int h, v; 
	cin >> h >> v;
	float l = (float)h / sin(v * (M_PI / 180.0f));
	cout << ((int)l) + 1 << endl;
	return 0;
}
