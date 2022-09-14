#include <iostream>
using namespace std;

string shift(string ksub, int amount) {
    for(int i = 0; i < amount; i++) {
        char c = ksub[ksub.size() - 1];
        ksub.erase(ksub.begin() + ksub.size() - 1);
        ksub.insert(ksub.begin(), c);
    }
    return ksub;
}

int main(void) {
    string s; cin >> s;
    int k = 1;
    while(true) {
        if(s.size() % k != 0) {
            k++;
            continue;
        }
        int ss = 0;
        for(int c = 0; c <= s.size() - k; c += k) {
            string curr = s.substr(c, k);
            if(curr != shift(s.substr(0, k), ss)) goto newK;
            ss++;
        }
        cout << k << endl;
        break;
        newK:;
        k++;
    }
    return 0;
}
