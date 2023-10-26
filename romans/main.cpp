// Accepted

#include <iostream>
using namespace std;

int main() {
	float miles; cin >> miles;
	miles *= (5280.0f / 4854.0f) * 1000.0f;
	bool round = ((int)(miles * 10.0f) % 10) >= 5;
	cout << ((round) ? ((int)miles) + 1 : (int)miles) << endl;
	return 0;
}
