#include <iostream>
using namespace std;

int main(void) {
    long long int l, c; cin >> l >> c;
    long long int denom = c, rolls = 1;
    while(true) {
        long double even = (long double)l / denom;
        if((long long int)even == even)
            break;
        denom -= (l % denom);
        rolls++;
    }
    cout << rolls << endl;
    return 0;
}
