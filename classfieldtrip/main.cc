#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
    string l1, l2;
    cin >> l1 >> l2;
    l1 += l2;
    sort(l1.begin(), l1.end());
    cout << l1 << endl;
    return 0;
}
