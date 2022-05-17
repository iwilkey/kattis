#include <iostream>
#include <climits>
#include <stdio.h>
using namespace std;

int main(void) {

    int am[3], call[3];
    cin >> am[0] >> am[1] >> am[2] 
        >> call[0] >> call[1] >> call[2];
    pair<float, int> minI = make_pair(INT_MAX, -1);
    for(int i = 0; i < 3; i++) {
        float cal = ((float)am[i] / call[i]);
        if(cal < minI.first) {
            minI.first = cal;
            minI.second = i;
        }
    }

    for(int i = 0; i < 3; i++) 
        printf("%0.6f ", ((float)am[i] - (call[i] * minI.first))); 
    cout << endl;
    
    return 0;
}
