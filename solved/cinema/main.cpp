#include <iostream>
using namespace std;

int main(void) {
    int s, g, c = 0, d = 0; cin >> s >> g;
    for(int i = 0; i < g; i++) {
        static int in;
        cin >> in;
        if(c + in > s)
            d++;
        else c += in;
    }
    cout << d << endl;
    return 0;
}
