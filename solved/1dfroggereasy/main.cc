#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char ** argv) {
    int n, s, m;
    cin >>  n >> s >> m;
    vector<int> b;
    vector<bool> v;
    for(int i = 0; i < n; i++) {
        static int nn;
        cin >> nn;
        b.push_back(nn);
        v.push_back(false);
    }
    int fi = s - 1;
    int moves = 0;
    for(;;) {
        if(fi < 0) {
            cout << "left" << endl;
            break;
        }
        if(fi >= n) {
            cout << "right" << endl;
            break;
        }
        if(b[fi] == m) {
            cout << "magic" << endl;
            break;
        }
        if(v[fi]) {
            cout << "cycle" << endl;
            break;
        }
        v[fi] = true;
        fi += b[fi];
        moves++;
    }
    cout << moves << endl;
    return 0;
}
