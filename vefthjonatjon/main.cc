#include <iostream>
using namespace std;

int main(void) {
    int c;
    cin >> c;
    int cu = 0;
    int me = 0;
    int ha = 0;
    for(int i = 0; i < c; i++) {
        static char c, m, h;
        cin >> c >> m >> h;
        cu += (c == 'J' ? 1 : 0);
        me += (m == 'J' ? 1 : 0);
        ha += (h == 'J' ? 1 : 0);
    }
    int min = cu;
    if(me < min)
        min = me;
    if(ha < min)
        min = ha;
    cout << min << endl;
    return 0;
}
