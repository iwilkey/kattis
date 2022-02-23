#include <iostream>
#include <string>
using namespace std;

int main() {

	const int coef[10] = {
		4, 3, 2, 7, 6, 5, 4, 3, 2, 1
	};
	string num; 
	getline(cin, num);
	int sum = 0, i = 0;
	for(int n = 0; n < num.size(); n++) {
		if(num[n] != '-') {
			sum += (int)(num[n] - '0') * coef[i];
			i++;
		}
	}

	cout << ((sum % 11 == 0) ? "1" : "0") << endl;
	return 0;
}
