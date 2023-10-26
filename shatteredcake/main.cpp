// Accepted

#include <iostream>
using namespace std;

int main() {
	int w, n; 
	cin >> w >> n;
	int area = 0;
	for(int i = 0; i < n; i++) {
		static int w, l;
		cin >> w >> l;
		area += w * l;
	}
	cout << area / w << endl;
	return 0;
}
