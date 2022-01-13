// Accepted

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> knots;
	for(int i = 0; i < n; i++) {
		static int knot; cin >> knot;
		knots.push_back(knot);
	}
	for(int i = 0; i < n - 1; i++) {
		static int knot; cin >> knot;
		knots.erase(remove(knots.begin(), knots.end(), knot), 
			knots.end());
	}
	cout << knots[0] << endl;
	return 0;
}
