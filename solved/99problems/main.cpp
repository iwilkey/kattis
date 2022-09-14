#include <iostream>
using namespace std;

int main(void) {

    int n, d = 1; cin >> n;
    while(true) {
        string dn = to_string(max(0, n - d)),
            in = to_string(n + d);
        if(dn.size() >= 2) dn = dn.substr(dn.size() - 2, 2);
        if(in.size() >= 2) in = in.substr(in.size() - 2, 2);
        if((in == "99" && dn == "99") || in == "99") {
            cout << n + d << endl;
            return 0;
        } else if(dn == "99") {
            cout << n - d << endl;
            return 0;
        }
        d++;
    }

    return 0;
}
