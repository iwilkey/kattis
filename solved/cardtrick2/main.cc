#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(unsigned int i = 0; i < n; i++) {
        int c;
        cin >> c;
        int * cards = new int[c];
        for(unsigned int j = 0; j < c; j++)
            cards[j] = j + 1;
        
    }
    return 0;
}
