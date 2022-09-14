// Accepted

#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		static int nums[3];
		cin >> nums[0] >> nums[1] >> nums[2];
		bool poss = false;
		for(int arg = 0; arg < 4; arg++) {
			switch(arg) {
				case 0:
					if(nums[0] + nums[1] == nums[2]) poss = true;
				case 1:
					if(nums[0] - nums[1] == nums[2] 
						|| nums[1] - nums[0] == nums[2]) poss = true;
				case 2:
					if(nums[0] * nums[1] == nums[2]) poss = true;
				case 3:
					if(nums[0] / (float)nums[1] == (float)nums[2] 
						|| nums[1] / (float)nums[0] == (float)nums[2]) poss = true;
			}
		}
		cout << ((poss) ? "Possible" : "Impossible") << endl;
	}
	return 0;
}
