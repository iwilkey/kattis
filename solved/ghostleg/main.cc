#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int r[n];
    for(int i = 0; i < n; i++)
        r[i] = i + 1; // rungs are 1-indexed.
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        a--; // a is 1-indexed.
        int t = r[a];
        r[a] = r[a + 1];
        r[a + 1] = t;
    }
    for(int i = 0; i < n; i++) {
        cout << r[i];
        if(i != n - 1)
            cout << endl;
    }
    return 0;
}
