#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(void) {

	long long int n, e, s, count = 0; cin >> n >> e;
	s = pow(2, e);
	string search = to_string(s);
	for(long long int k = s; k <= n; k++) {
		string num = to_string(k);
		for(long long int c = 0; c <= num.size() - search.size(); c++) {
			static string sub; 
			sub = num.substr(c, search.size());
			if(sub == search) {
				count++;
				break;
			}
		}
	}

	cout << count << endl;

	return 0;
}
