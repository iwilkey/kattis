#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    double ans = (pow(n, 4) - (6 * pow(n, 3)) + (11 * pow(n, 2)) - (6 * n)) / 24.0f;
    cout << (int)ans << endl;
    return 0;
}
