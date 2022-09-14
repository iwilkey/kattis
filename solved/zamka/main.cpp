// Accepted

#include <iostream>
#include <vector>
using namespace std;

bool sumOfDigitsAddsTo(int digits, int sum) {
	string num = to_string(digits);
	int ret = 0;
	for(int i = 0; i < num.size(); i++)
		ret += num[i] - '0';
	return sum == ret;
}

int main() {
	int l, d, x; cin >> l >> d >> x;
	vector<int> valid;
	for(int i = l; i <= d; i++)
		if(sumOfDigitsAddsTo(i, x)) 
			valid.push_back(i);
	cout << valid[0] << endl << 
		valid[valid.size() - 1] << endl;
	return 0;
}
