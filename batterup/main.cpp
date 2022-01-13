// Accepted

#include <iostream>
using namespace std;

int main() {
	int atbats, points = 0, valid = 0; cin >> atbats;
	for(int i = 0; i < atbats; i++) {
		static int val; cin >> val;
		points += (val == -1) ? 0 : val;
		valid += (val == -1) ? 0 : 1;
	}
	cout << (double)points / (double)valid << endl;
	return 0;
}
