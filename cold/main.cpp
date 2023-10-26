// Accepted

#include <iostream>
using namespace std;

int main() {
	int n, bz = 0; cin >> n;
	for(int i = 0; i < n; i++) {
		static int temp; cin >> temp;
		if(temp < 0) bz++;
	}
	cout << bz << endl;
	return 0;
}
