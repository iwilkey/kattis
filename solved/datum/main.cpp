// Accepted

#include <iostream>
using namespace std;

int main() {

	const string DOW[7] = {
		"Sunday", "Monday", "Tuesday",
		"Wednesday", "Thursday", "Friday",
		"Saturday"
	};

	const int TTN[12] = {
		5, 1, 1, 4, 6, 2, 
		4, 7, 3, 5, 1, 3
	};

	int d, m; cin >> d >> m;
	cout << DOW[((d - 1) + (TTN[m - 1] - 1)) % 7] << endl;
	return 0;
}
