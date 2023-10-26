#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int nums[5] = { 0 };
	for(int i = 1; i <= 5; i++) {
		cin >> nums[i - 1];
	}
	while(true) {
		for(int i = 1; i <= 5; i++) 
			if(nums[i - 1] != i) 
				goto cont;
		break;
		cont:;
		for(int i = 0; i < 4; i++) {
			if(nums[i] > nums[i + 1]) {
				swap(nums[i], nums[i + 1]);	
				for(int i = 1; i <= 5; i++) cout << nums[i - 1] << " ";
				cout << endl;
			}
		}
	}
	return 0;
}
