// Accepted

#include <iostream>
using namespace std;

int main() {
	int l, r; cin >> l >> r;
	if(l == 0 && r == 0) cout << "Not a moose" << endl;
	else if(l != r) cout << "Odd " << max(l, r) * 2 << endl;
	else cout << "Even " << r * 2 << endl;
	return 0;
}
