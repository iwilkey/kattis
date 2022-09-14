#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        int g, currMaxGear = -1; 
        float currMax = -1.0f;
        cin >> g;
        for(int j = 1; j <= g; j++) {
            int a, b, c;
            cin >> a >> b >> c;
            float maxR = (float)b / (2 * a),
                maxT = (-a * pow(maxR, 2)) + (b * maxR) + c;
            if(currMax < maxT) {
                currMax = maxT;
                currMaxGear = j;
            }
        }
        cout << currMaxGear << endl;
    }
    return 0;
}
