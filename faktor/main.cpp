// Accepted

#include <iostream>
using namespace std;

int main() {
	int a, i, start; cin >> a >> i;
	start = a * i;
	while(true) {
		start--;
		if((int)(start / (float)a) + 1 != i) break;
	}
	cout << start + 2 << endl;
	return 0;
}
