// Accepted

#include <iostream>
using namespace std;

int main() {
	int cases; cin >> cases;
	for(int i = 0; i < cases; i++) {
		static int casenum, sum, an, b, n;
		sum = 0;
		cin >> casenum >> b >> n;
		while(true) {
			if(n <= 0) break;
			an = n % b;
			sum += an * an;
			n /= b;
		}
		cout << casenum << " " << sum << endl;
	}
	return 0;
}
