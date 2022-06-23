#include <iostream>
using namespace std;

int main(void) {
    int a, b; cin >> a >> b;
    if(a > b) {
        int moves = 0;
        while(a > b) {
            if(a % 2 == 1) {
                moves++;
                a++;
                continue;
            }
            moves++;
            a /= 2;
        }
        moves += abs(a - b);
        cout << moves << endl;
    } else cout << abs(a - b) << endl;
    return 0;
}
