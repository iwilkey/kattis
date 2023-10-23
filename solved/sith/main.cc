#include <iostream>
using namespace std;

int main(void) {
    string n;
    int a;
    int b;
    int ans;
    getline(cin, n);
    cin >> a >> b >> ans;
    int c1 = a - b;
    int c2 = abs(c1);
    if(c1 == c2) cout << "VEIT EKKI" << endl;
    else if(c1 == ans) cout << "JEDI" << endl;
    else cout << "SITH" << endl;
    return 0;
}
