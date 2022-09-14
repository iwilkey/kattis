#include <iostream>
using namespace std;

int main(void) {
    int r, t; cin >> r; cin >> t;
    float even = (float)t / r;
    int upper = ((int)even) + 1;
    for(int i = r; i >= 0; i--) 
        if((upper * i) + ((int)even * (r - i)) == t) 
            for(int c = 0; c < 2; c++)
                for(int f = 0; f < ((!c) ? i : (r - i)); f++) {
                    for(int ff = 0; ff < ((!c) ? upper : (int)even); ff++)
                        cout << "*";
                    cout << endl;
                }
    return 0;
}
