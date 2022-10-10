#include <iostream>
using namespace std;

int main(void) {
    const int load[3] = { 500, 200, 100 };
    int sek, take = 0; cin >> sek;
    if(sek < load[2]) {
        cout << 1 << endl;
        return 0;
    }
    for(int i = 0; i < 3; i++) {
        if(sek >= load[i]) {
            take += (int)((float)sek / load[i]);
            sek %= load[i];
        }
    }
    cout << take << endl;;
    return 0;
}
