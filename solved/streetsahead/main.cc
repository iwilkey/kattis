#include <iostream>
#include <map>
using namespace std;

int main(void) {
    int n, q;
    cin >> n >> q;
    map<string, int> streets;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        streets[s] = i;
    }
    for(int i = 0; i < q; i++) {
        string st, en;
        cin >> st >> en;
        cout << abs(streets[st] - streets[en]) - 1 << endl;
    }
    return 0;
}
