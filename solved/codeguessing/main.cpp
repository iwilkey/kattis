#include <iostream>
#include <climits>
#include <vector>
using namespace std;

bool checkStrictIncrease(string list) {
    for(int i = 1; i < 4; i++) 
        if(list[i] - '0' <= list[i - 1] - '0') 
            return false;
    return true;
}

int main(void) {
    string order;
    int a1, a2; cin >> a1 >> a2 >> order;
    bool sa = false;
    int ib1 = -1, ib2 = -1, i = 0;
    for(char & c : order) {
        if(c == 'A') {
            c = (!sa) ? a1 : a2;
            c += '0';
            sa = true;
        } else {
            if(ib1 == -1) ib1 = i;
            else ib2 = i;
        }
        i++;
    }
    vector<string> valid;
    for(int b1 = 1; b1 <= 9; b1++) 
        for(int b2 = 1; b2 <= 9; b2++) {
            order[ib1] = b1 + '0';
            order[ib2] = b2 + '0';
            if(checkStrictIncrease(order))
                valid.push_back(order);
        }
    if(valid.size() == 1) cout << valid[0][ib1] << " " << valid[0][ib2] << endl;
    else cout << -1 << endl;
    return 0;
}
