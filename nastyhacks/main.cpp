// Accepted

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		static int r, e, c; cin >> r >> e >> c;
		if(r + c > e) cout << "do not advertise";
		else if(r + c == e) cout << "does not matter";
		else cout << "advertise";
		cout << endl;
	}
	return 0;
}