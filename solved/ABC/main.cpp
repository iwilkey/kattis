// Accepted

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int nums[3];
	for(int i = 0; i < 3; i++) {
		static int in;
		cin >> in;
		nums[i] = in;
	}
	sort(nums, nums + 3);
	string in2; cin >> in2;
	for(int i = 0; i < 3; i++)
		cout << nums[(in2[i] - 'A')] << " ";
	cout << endl;
	return 0;
}
