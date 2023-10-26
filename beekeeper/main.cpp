#include <iostream>
#include <vector>
using namespace std;

bool isPair(string check, const string * valid) {
    for(int i = 0; i < 6; i++)
        if(check == valid[i])
            return true;
    return false;
}

int main(void) {

    const string valid[6] = {
        "aa", "ee", "ii", "oo", "uu", "yy"
    };

    while(!cin.eof()) {
        int am; cin >> am;
        if(am == 0) break;
        int maxAm = 0;
        string holder;
        for(int i = 0; i < am; i++) {
            string word; cin >> word;
            int pairs = 0;
            for(int i = 0; i < word.size() - 1; i++)
                if(isPair(word.substr(i, 2), valid))
                    pairs++;
            if(pairs > maxAm) {
                maxAm = pairs;
                holder = word;
            }
        }
        cout << holder << endl;
    }

    return 0;
}