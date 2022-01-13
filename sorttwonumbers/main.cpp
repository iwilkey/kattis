// Accepted

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int nums[2] = { 0, 0 };
	cin >> nums[0] >> nums[1];
	sort(nums, nums + 2);
	cout << nums[0] << " " << nums[1] << endl;
	return 0;
}
