#include <iostream>
using namespace std;

int main(void) {
    int g, t, i, weight = 0; cin >> g >> t >> i;
    int rw = g - t;
    for(int ii = 0; ii < i; ii++) {
        static int in; cin >> in;
        weight += in;
    }
    cout << ((rw * 0.90f) - weight) << endl;
    return 0;
}
