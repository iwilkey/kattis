#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int s, p; cin >> s >> p;
    vector<bool> space(s, false);
    for(int i = 0; i < p; i++) {
        static int in; cin >> in;
        space[in - 1] = true;
    }
    int added = 0;
    for(int i = 0; i < s; i++) {
        if(space[i]) continue;
        int l = (i - 1 < 0) ? s - 1 : i - 1,
            r = (i + 1 > s - 1) ? 0 : i + 1;
        if(!space[l] && !space[r]) {
            added++;
            space[i] = true;
        }
    }
    cout << added << endl;
    return 0;
}
