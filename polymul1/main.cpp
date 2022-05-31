#include <iostream>
#include <vector>
using namespace std;

vector<int> foil(int deg, vector<int> poly1, vector<int> poly2) {
    vector<int> ret(deg + 1, 0);
    for(int i = 0; i < poly1.size(); i++) 
        for(int j = 0; j < poly2.size(); j++) 
            ret[i + j] += poly1[i] * poly2[j];
    return ret;
}

int main(void) {
    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        int deg, pDeg = 0;
        static vector<int> poly[2];
        poly[0].clear(); poly[1].clear();
        for(int p = 0; p < 2; p++) {
            cin >> deg;
            pDeg += deg;
            poly[p] = vector<int>(deg + 1, 0);
            for(int ii = 0; ii < deg + 1; ii++)
                cin >> poly[p][ii];
        }
        vector<int> ans = foil(pDeg, poly[0], poly[1]);
        cout << pDeg << endl;
        for(int i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
