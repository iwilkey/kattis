// Accepted

#include <iostream>
using namespace std;

int main() {
	int n, ret = 0; cin >> n;
	for(int i = 0; i < n; i++) {
		static int in; cin >> in;
		ret += in;
	}
	cout << ret << endl;
	return 0;
}
