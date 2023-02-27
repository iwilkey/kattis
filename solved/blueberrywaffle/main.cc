#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int r, f;
    cin >> r >> f;
    int turns = round(f / (float)r);
    if(turns % 2 == 0)
        cout << "up" << endl;
    else cout << "down" << endl;
    return 0;
}
