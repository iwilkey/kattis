// Accepted

#include <iostream>
using namespace std;

int main() {
	int n, k, rating = 0; cin >> n >> k;
	for(int i = 0; i < k; i++) {
		static int r; cin >> r;
		rating += r;
	}
	cout << ((float)rating + (-3.0f * (n - k))) / ((float)n) << " " 
		<< ((float)rating + (3.0f * (n - k))) / ((float)n) << endl;
	return 0;
}
