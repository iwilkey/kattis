#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    int c;
    cin >> c;
    for(int i = 0; i < c; i++) {
        unsigned l, n;
        cin >> l >> n;
        unsigned p = 1, q = 1;
        // push the bits of n onto a stack such that we can traverse them in opposite order.
        stack<unsigned> path;
        while (n > 1) {
            path.push(n % 2);
            n /= 2;
        }
        while (!path.empty()) {
            if (path.top() == 1) p += q;
            else q += p;
            path.pop();
        }
        cout << l << " " << p << "/" << q << endl;
    }
    return 0;
}
