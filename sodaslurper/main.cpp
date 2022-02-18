#include <iostream>
using namespace std;

int main() {
	int e, f, c, b = 0; cin >> e >> f >> c;
	e += f;
	while(true) {
		if(e / c < 1) break;
		e /= c;
		b += e;
	}
	cout << b << endl;
	return 0;
}
