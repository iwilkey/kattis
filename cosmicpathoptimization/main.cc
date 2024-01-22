#include <iostream>
using namespace std;

int main(void) {
    int n, s = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        static int j;
        cin >> j;
        s += j;
    }
    cout << (int)((float)s / n) << endl;
    return 0;
}
