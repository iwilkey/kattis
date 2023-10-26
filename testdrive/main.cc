#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    int d1 = b - a;
    int d2 = c - b;
    if(d1 * d2 < 0) cout << "turned" << endl;
    else if(abs(d1) < abs(d2)) cout << "accelerated" << endl;
    else if(abs(d1) > abs(d2)) cout << "braked" << endl;
    else cout << "cruised" << endl;
    return 0;
}
