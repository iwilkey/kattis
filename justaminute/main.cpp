#include <iostream>
#include <utility>
using namespace std;

int main() {
	int cases; cin >> cases;
	double currAv = 0.0f, averages = 0.0f;
	for(int i = 0; i < cases; i++) {
		int m, s; cin >> m >> s;
		double calc = (s / (m * (60.0f * currAv)));
		averages += calc;
		currAv += calc;
		currAv /= i + 1;
	}
	cout << averages / cases << endl;

	return 0;
}