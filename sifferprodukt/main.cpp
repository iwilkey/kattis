#include <iostream>
using namespace std;

int main(void) {
    int num; cin >> num;
    while(true) {
        string n = to_string(num);
        int rn = 0;
        for(char c : n) 
            if(c != '0') {
                if(rn == 0) rn = (int)(c - '0');
                else rn *= (int)(c - '0');
            }
        if(rn < 9) {
            cout << rn << endl;
            break;
        } else num = rn;
    }
    return 0;
}
