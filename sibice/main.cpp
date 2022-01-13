// Accepted

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, w, h; cin >> n >> w >> h;
	const float maxL = pow(pow(w, 2) + pow(h, 2), 0.5f);
	for(int i = 0; i < n; i++) {
		static int l; cin >> l;
		if(l <= maxL) cout << "DA";
		else cout << "NE";
		cout << endl;
	}
	return 0;
}
