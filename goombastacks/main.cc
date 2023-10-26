#include <iostream>
using namespace std;

int main(void) {
    int r;
    cin >> r;
    int eg = 0;
    for(int i = 0; i < r; i++) {
        static int g, b;
        cin >> g >> b;
        eg += g;
        if(eg < b) {
            cout << "impossible" << endl;
            return 0;
        }
    }
    cout << "possible" << endl;
    return 0;
}
