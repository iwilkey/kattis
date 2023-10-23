#include <iostream>
using namespace std;

int main(void) {
    int n, k, d;
    cin >> n >> k >> d;
    int dd = k + d;
    int ff = 0;
    for(int i = 0; i < n; i++) {
        static int f;
        cin >> f;
        if(f + 14 <= dd)
            ff++;
    }
    cout << ff << endl;
    return 0;
}
