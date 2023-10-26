#include <iostream>
using namespace std;

int main(void) {
    int c; cin >> c;
    int sum = 0;
    for(int i = 0; i < c; i++) {
        static int in;
        cin >> in;
        sum += in;
    }
    if(sum % 3)
        cout << "no" << endl;
    else cout << "yes" << endl;
    return 0;
}
