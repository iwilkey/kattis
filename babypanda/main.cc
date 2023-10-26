#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    unsigned long long int n, m;
    cin >> n >> m;
    unsigned long long int rem = m;
    unsigned ans = 0;
    while(rem != 0) {
        unsigned long long int days = (unsigned long long int)log2(rem);
        rem -= (unsigned long long int)powl(2, days);
        ans++;
    }
    cout << ans << endl;
    return 0;
}
