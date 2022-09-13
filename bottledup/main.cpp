#include <iostream>
using namespace std;

int main(void) {
    int v, l, s, start; cin >> v >> l >> s;
    start = (int)((float)v / l);
    for(int ll = start; ll >= 0; ll--) {
        int up = 0;
        while(true) {
            int ss = (start - ll) + up,
                ans = (ll * l) + (s * ss);
            if(ans > v) break;
            else if(ans == v) {
                cout << ll << " " << ss << endl;
                return 0;
            }
            up++;
        }
    }
    cout << "Impossible" << endl;
    return 0;
}
