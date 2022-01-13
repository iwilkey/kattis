// Accepted

#include <iostream>
using namespace std;

int main() {
	int x, n; cin >> x; cin >> n;
	int mega = 0;
	for(int i = 0; i < n; i++) {
		static int p;
		cin >> p;
		mega += x - p;
	}
	cout << mega + x << endl;
	return 0;
}
