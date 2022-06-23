#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(void) {
    int cases; cin >> cases;
    for(int i = 0; i < cases; i++) {
        int prob; cin >> prob;
        // Trival base cases...
        if(prob == 2) {
            cout << 3 << endl;
            continue;
        } else if(prob == 1) {
            cout << 2 << endl;
            continue;
        }
        vector<unsigned long long int> add;
        // I'll use dynamic programming by defining the bases cases...
        add.push_back(2);
        add.push_back(3);
        add.push_back(5);
        unsigned long long int ans = 5;
        for(int ii = 3; ii < prob; ii++) {
            ans += add[ii - 2];
            ans %= ((unsigned long long int)pow(10, 9) + 7);
            add.push_back(ans);
        }
        cout << ans << endl;
    }
    return 0;
}