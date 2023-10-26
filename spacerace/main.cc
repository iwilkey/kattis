#include <iostream>
using namespace std;

int main(void) {
    int c;
    cin >> c;
    double d;
    cin >> d;
    string mh = "";
    double me = 0.0f;
    for(int i = 0; i < c; i++) {
        string ini;
        double v, r;
        cin >> ini >> v >> r;
        double t = d / v;
        double rf = r / t;
        double eff = v / rf;
        if(eff > me) {
            me = eff;
            mh = ini;
        }
    }
    cout << mh << endl;
    return 0;
}
