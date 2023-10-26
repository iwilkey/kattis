#include <iostream>
using namespace std;

int main(void) {
    int p, q;
    cin >> p >> q;
    int sum = 0;
    for(int i = 0; i < p; i++) {
        static int s;
        cin >> s;
        sum += s;
    }
    cout << ((sum > q) ? "Neibb" : "Jebb") << endl;
    return 0;
}
