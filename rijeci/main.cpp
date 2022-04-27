#include <iostream>
using namespace std;

int main(void) {
    int tt; cin >> tt;
    int last[2] = { 1, 0 },
        curr[2] = { -1, -1 };
    for(int t = 0; t < tt; t++) {
        curr[0] = last[1];
        curr[1] = last[0] + last[1];
        last[0] = curr[0]; last[1] = curr[1];
    }
    cout << curr[0] << " " << curr[1] << endl;
    return 0;
}
