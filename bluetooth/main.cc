#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<uint8_t> lsu(8, 0x01),
        rsu(8, 0x01),
        lsl(8, 0x01),
        rsl(8, 0x01);
    int prob; cin >> prob;
    for(int i = 0; i < prob; i++) {
        static string tooth; 
        static char state;
        cin >> tooth >> state;
        switch(tooth[0]) {
            case '+':
                lsu[(tooth[1] - '0') - 1] = ((state == 'b') ? 0x02 : 0x00);
                break;
            case '-':
                lsl[(tooth[1] - '0') - 1] = ((state == 'b') ? 0x02 : 0x00);
                break;
            default:;
        }
        switch(tooth[1]) {
            case '+': 
                rsu[(tooth[0] - '0') - 1] = ((state == 'b') ? 0x02 : 0x00);
                break;
            case '-': 
                rsl[(tooth[0] - '0') - 1] = ((state == 'b') ? 0x02 : 0x00);
                break;
            default:;
        }
    }
    bool lsuOne = false,
        lslOne = false,
        rsuOne = false,
        rslOne = false,
        lsTwo = false,
        rsTwo = false;
    for(int i : lsu) {
        if(i == 1) lsuOne = true;
        if(i == 2) lsTwo = true;
    }
    for(int i : lsl) {
        if(i == 1) lslOne = true;
        if(i == 2) lsTwo = true;
    }
    for(int i : rsu) {
        if(i == 1) rsuOne = true;
        if(i == 2) rsTwo = true;
    }
    for(int i : rsl) {
        if(i == 1) rslOne = true;
        if(i == 2) rsTwo = true;
    }
    if((lsuOne && lslOne) && !lsTwo) cout << 0 << endl;
    else if((rsuOne && rslOne) && !rsTwo) cout << 1 << endl;
    else cout << 2 << endl;
    return 0;
}
