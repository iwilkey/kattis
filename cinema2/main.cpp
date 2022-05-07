#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int s, g; cin >> s >> g;
    vector<int> nums;
    for(int i = 0; i < g; i++) {
        int si; cin >> si;
        nums.push_back(si);
    }

    int sf = 0, gg = 0;
    for(int i : nums) {
        if(sf + i <= s)
            sf += i;
        else {
            cout << g - gg << endl;
            return 0;
        }
        gg++;
    }
    cout << 0 << endl;
    return 0;
}
