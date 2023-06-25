#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

#define _USE_MATH_DEFINES

int main(void) {
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin.tie(NULL);
    while(!cin.eof()) {
        long double r;
        long double x;
        long double y;
        cin >> r >> x >> y;
        long double distance = (x * x) + (y * y);
        if(distance >= (r * r)) {
            cout << "miss" << endl;
            continue;
        }
        distance = sqrt(distance);
        long double h = r - distance;
        long double segment_a = r * r * acos((r - h) / r) - (r - h) * sqrt(2 * r * h - h * h);
        long double circle_a = M_PI * r * r;
        long double remaining_a = circle_a - segment_a;
        if(remaining_a < segment_a) {
            printf("%.7Lf %.7Lf\n", segment_a, remaining_a);
        } else {
            printf("%.7Lf %.7Lf\n", remaining_a, segment_a);
        }
    }
    return 0;
}
