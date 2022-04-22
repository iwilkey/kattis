#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if(a > b) return gcd(a - b, b);
    return gcd(a, b - a);
}

int main(void) {

	int in;
	string num = to_string(in);

	string frac, num, denom;
	getline(cin, frac);

	for(int c = 0; c < frac.size(); c++) {
		if(frac[c] == '/') {
			num = frac.substr(0, c);
			denom = frac.substr(c + 1, frac.size() - c);
			break;
		}
	}

	int cNum = (5 * stoi(num)) - (160 * stoi(denom)),
		cDenom = (9 * stoi(denom)),
		gcf = gcd(abs(cNum), abs(cDenom));

	cout << (cNum / gcf) << "/" << (cDenom / gcf) << endl;

	return 0;
}
