#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main(void) {

    int n, p; cin >> n >> p;
    unordered_map<int, int> nums;
    for(int i = 1; i <= p; i++) 
        nums[i] = 0;
    for(int i = 0; i < n; i++) {
        static int pick; cin >> pick;
        nums[pick]++;
    }
    int min = INT_MAX;
    vector<int> mins;
    for(auto entry : nums) {
        if(entry.second < min) {
            mins.clear();
            min = entry.second;
            mins.push_back(entry.first);
        } else if(entry.second == min) 
            mins.push_back(entry.first);
    }
    sort(mins.begin(), mins.end());
    cout << mins.size() << endl;
    for(int i : mins) cout << i << " ";
    cout << endl;

    return 0;
}