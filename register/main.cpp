#include <iostream>
using namespace std;

int main(void) {
    const int val[8] = { 2, 3, 5, 7, 11, 13, 17, 19 };
    int reg[8] = { 0 };
    for(int i = 0; i < 8; i++) 
        cin >> reg[i];
    
    int runs = 0;
    while(true) {
        for(int i = 0; i < 8; i++) {
            reg[i]++;
            reg[i] %= val[i];
            if(reg[i] != 0) goto inc;
            if(i == 7 && reg[7] == 0) break;
        }
        cout << runs << endl;
        break;
    inc:
        runs++;
    }
    
}