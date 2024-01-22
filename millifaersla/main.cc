#include <iostream>
using namespace std;

int main(void) {
    int fees[3];
    int m = 1e9 + 1;
    int s = 0;
    for(int i = 0; i < 3; i++) {
        int f;
        cin >> f;
        if(f < m) {
            m = f;
            s = i;
        }
    }
    string n[3] = { "Monnei", "Fjee", "Dolladollabilljoll" };
    cout << n[s] << endl;
    return 0;
}
