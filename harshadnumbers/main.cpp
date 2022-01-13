// Accepted

#include <iostream>
#include <string>
using namespace std;

bool isHarshad(long long int num) {
	string number = to_string(num);
	int sum = 0;
	for(int n = 0; n < number.size(); n++)
		sum += (int)number[n] - '0';
	return num % sum == 0;
}

int main() {
	long long int n; cin >> n;
	while(true) {
		if(isHarshad(n)) {
			cout << n << endl;
			break;
		}
		n++;
	}
	return 0;
}
