#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        static string w;
        cin >> w;
        if(w[0] >= 'A' && w[0] <= 'Z')
            cout << w[0];
    }
    cout << endl;
    return 0;
}
