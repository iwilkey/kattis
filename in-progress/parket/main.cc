// https://open.kattis.com/problems/parket

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

    // This takes too long. Do algebra approach.
    int o, i;
    cin >> o >> i;
    int area = o + i;
    int ans[2] = { 0 };
    for(int l = 3; l <= area; l++) {
        for(int w = l; w <= area / 3; w++) {
            if(l * w == area) {
                ans[0] = l;
                ans[1] = w;
                break;
            }
        }
    }
    sort(ans, ans + 2);
    cout << ans[1] << " " << ans[0] << endl;

    return 0;
}
