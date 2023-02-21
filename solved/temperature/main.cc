#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {

    float x, y;
    cin >> x >> y;
    if(x == 0 && y != 1) {
        cout << "IMPOSSIBLE" << endl;
    } else if(y == 1) {
        cout << "ALL GOOD" << endl;
    } else {
        float ans = (x / (1.0f - y));
        printf("%.6f\n", ans);
    }

    return 0;
}
