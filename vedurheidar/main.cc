#include <iostream>
using namespace std;

int main(void) {
    int m, r;
    cin >> m >> r;
    for(int i = 0; i < r; i++) {
        static string n;
        static int s;
        cin >> n >> s;
        cout << n << ((s >= m) ? " opin" : " lokud") << endl;
    }
    return 0;
}
