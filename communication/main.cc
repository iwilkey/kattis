#include <iostream>
using namespace std;

int main(void) {
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        unsigned b;
        cin >> b;
        for(int x = 0; x <= 0xff; x++)
            if((uint8_t)(x ^ (x << 0x01)) == b) {
                printf("%u ", x);
                break;
            }
    }
    cout << endl;
    return 0;
}
