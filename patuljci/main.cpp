#include <iostream>
using namespace std;

int main(void) {
    int nums[9] = { -1 };
    for(int i = 0; i < 9; i++)
        cin >> nums[i];
    for(int i = 0; i < 8; i++) {
        for(int ii = i + 1; ii < 9; ii++) {
            int sum = 0;
            for(int iii = 0; iii < 9; iii++) {
                if(iii == i || iii == ii) continue;
                sum += nums[iii];
            }
            if(sum == 100) {
                for(int iii = 0; iii < 9; iii++) {
                    if(iii == i || iii == ii) continue;
                    cout << nums[iii] << endl;
                }
                return 0;
            }
        }
    }
    return 0;
}
