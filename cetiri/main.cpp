#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(void) {
    int nums[3] = { -1 };
    for(int i = 0; i < 3; i++)
        cin >> nums[i];
    sort(nums, nums + 3);
    int min = INT_MAX;
    for(int i = 0; i < 2; i++) {
        int diff = nums[i + 1] - nums[i];
        if(diff < min) min = diff;
    }
    for(int i = 0; i < 2; i++) {
        int n = nums[i + 1] - nums[i];
        if(n > min) {
            cout << nums[i] + min << endl;
            return 0;
        }
    }
    cout << nums[2] + min << endl;
    return 0;
}
