#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    // High-precision problem...
    cout << setprecision(16);
    float c;
    cin >> c;
    c = (c < 1.0) ? c : 1.0;
    cout << ((c * c) / 4.0) << endl;
    return 0;
}
