#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
    if(n1 == 0 || n2 == 0) return 0;
    else if(n1 == n2) return n1;
    else if(n1 > n2) return gcd(n1 - n2, n2);
    else return gcd(n1, n2 - n1);
}

int main(void) {
    int p, q, s;
    cin >> p >> q >> s;
    int lcm = (p * q) / (gcd(p, q));
    if(lcm <= s) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
