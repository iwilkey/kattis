// Accepted

#include <iostream>
using namespace std;

int main() {
	const int VALID_COUNT[6] = { 1, 1, 2, 2, 2, 8 };
	for(int i = 0; i < 6; i++) {
		static int type; cin >> type;
		cout << VALID_COUNT[i] - type << " ";
	}
	cout << endl;
	return 0;
}
