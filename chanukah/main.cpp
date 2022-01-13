// Accepted

#include <iostream>
using namespace std;

int main() {
	int c; cin >> c;
	for(int i = 0; i < c; i++) {
		static int d, days; cin >> d >> days;
		int lit = 0;
		for(int day = 0; day <= days; day++)
			lit += day;
		lit += (1 * days);
		cout << d << " " << lit << endl;
	}
	return 0;
}
