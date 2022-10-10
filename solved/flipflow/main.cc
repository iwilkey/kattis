#include <iostream>
using namespace std;

int main(void) {
    int t, s, n;
    cin >> t >> s >> n;
    int sides[2] = { s, 0 },
        lastTime = 0;
    bool dir = true;
    for(int i = 0; i < n; i++) {
        static int time;
        cin >> time;
        if(i == 0) {
            lastTime = time;
            continue;
        }
        int elap = time - lastTime;
        sides[(dir) ? 0 : 1] -= elap;
        sides[(dir) ? 0 : 1] = max(0, sides[(dir) ? 0 : 1]);
        sides[(dir) ? 1 : 0] += elap;
        sides[(dir) ? 1 : 0] = min(s, sides[(dir) ? 1 : 0]);
        lastTime = time;
        dir = !dir;
    }
    int ans = sides[(dir) ? 0 : 1] - (t - lastTime);
    if(ans < 0) cout << 0 << endl;
    else if(ans > s) cout << s << endl;
    else cout << ans << endl;
    return 0;
}
