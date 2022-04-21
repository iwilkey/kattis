#include <iostream>
using namespace std;

int main(void) {
    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        static int cals; cin >> cals;
        float verd = cals / 400.0f;
        if((int)(verd) == verd)
            cout << verd << endl;
        else cout << (int)verd + 1 << endl;
    }
    return 0;
}
