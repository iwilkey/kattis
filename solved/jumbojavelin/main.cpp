// Accepted

#include <iostream>
using namespace std;

int main() {
	int n, s = 0; cin >> n;
	for(int i = 0; i < n; i++) {
		static int l; cin >> l;
		s += l;
	}
	cout << s - (n - 1) << endl;
	return 0;
}
