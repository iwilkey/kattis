// Accepted

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void binary(int n, vector<int> & result) {
    if (n > 1) binary(n / 2, result);
    result.push_back(n % 2);
}

long long int repToReverseNumber(vector<int> & rep) {
	long long int ret = 0;
	for(int i = rep.size() - 1; i >= 0; i--)
		ret += rep[i] * pow(2, i);
	return ret;
}

int main() {
	int i = 0; cin >> i;
	vector<int> rep;
	binary(i, rep);
	cout << repToReverseNumber(rep) << endl;
	return 0;
}
