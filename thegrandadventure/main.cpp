#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int c; cin >> c;
    cin.ignore();
    for(int i = 0; i < c; i++) {
        static string adv;
        getline(cin, adv);

        vector<char> pack;
        for(char c : adv) {
            if(c == '.') continue;
            if(c == '$' || c == '|' || c == '*') {
                pack.push_back(c);
                continue;
            }
            bool verd = true;
            switch(c) {
                case 'b': 
                    if(pack.size() == 0) verd = false;
                    else if(pack[pack.size() - 1] != '$') verd = false;
                    break;
                case 'j': 
                    if(pack.size() == 0) verd = false;
                    else if(pack[pack.size() - 1] != '*') verd = false;
                    break;
                case 't': 
                    if(pack.size() == 0) verd = false;
                    else if(pack[pack.size() - 1] != '|') verd = false;
                    break;
            }
            if(!verd) goto next;
            else pack.erase(pack.end() - 1);
        }
        if(pack.size() == 0) {
            cout << "YES" << endl;
            continue;
        }
        next:;
        cout << "NO" << endl;
    }



    return 0;
}