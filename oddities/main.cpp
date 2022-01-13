// Accepted

#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		static int in; cin >> in;	
		cout << in << " is " << ((in % 2 == 0) ? "even" : "odd") << endl;
	}
	return 0;
}
