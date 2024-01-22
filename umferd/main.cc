#include <iostream>
using namespace std;

int main(void) {
    int n, m, hash = 0, dot = 0;
    cin >> n >> m;
    for(int mm = 0; mm < m; mm++) {
        string l;
        cin >> l;
        for(int nn = 0; nn < n; nn++) {
            if(l[nn] == '#') hash++;
            else dot++;
        }
    }
    cout << (dot / (float)(hash + dot)) << endl;
    return 0;
}
