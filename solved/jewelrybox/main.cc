#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    int c;
    cin >> c;
    for(int i = 0; i < c; i++) {
        static float x, y;
        cin >> x >> y;
        float h = ((x + y) - ((sqrt(pow(x + y, 2) - (3 * x * y))))) / 6.0f;
        float ans = (x - (2 * h)) * (y - (2 * h)) * h;
        printf("%.6f\n", ans);
    }
    return 0;
}
