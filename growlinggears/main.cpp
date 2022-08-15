#include <iostream>
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
            float maxR = (float)b / (2 * a);
            if(currMax < abs(maxR)) {
                currMax = abs(maxR);
                currMaxGear = j;
            }
        }
        cout << currMaxGear << endl;
    }
    return 0;
}