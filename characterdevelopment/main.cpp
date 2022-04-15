#include <iostream>
using namespace std;

/* For n characters, there are 2^n subsets.
But, of those sets, n are singletons and there is the
empty set as well. So, the answer is 2^n - n - 1 relationships.
*/

int main(int argc, char ** args) {
	int n; cin >> n;
	cout << ((1 << n) - n - 1) << endl;
	return 0;
}
