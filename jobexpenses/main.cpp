// Accepted

#include <iostream>
using namespace std;

int main() {
	int c = 0, sum = 0; cin >> c;
	for(int i = 0; i < c; i++) {
		static int in; cin >> in;
		if(in < 0) sum += abs(in);
	}
	cout << sum << endl;
	return 0;
}
