#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    cout << n - ((n / m) * m) << endl;
    return 0;
}
