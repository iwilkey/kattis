#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(int n) {
	string num = to_string(n);
	int ret = 0;
	for(int n = 0; n < num.size(); n++)
		ret += (int)(num[n] - '0');
	return ret;
}

int main() {
	while(true) {
		int n, sumOfN, m = 11; cin >> n;
		if(n == 0) break;
		sumOfN = sumOfDigits(n);
		while(true) {
			static int sumOfNM;
			sumOfNM = sumOfDigits(n * m);
			if(sumOfNM == sumOfN) break;
			m++;
		}
		cout << m << endl;
	}
	return 0;
}
