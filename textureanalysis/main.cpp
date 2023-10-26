#include <iostream>
using namespace std;

bool verifyPattern(string line, int star, int dc) {
    
}

int main(void) {

    int l = 1;
    while(!cin.eof()) {
        string line;
        cin >> line;
        if(line == "END") break;
        int star = -1;
        for(char c : line)
            if(c == '*') 
                star++;
        // Find pattern...
        int dC = 0, sc = 0;
        for(int i = 1; i < line.size(); i++) {
            if(line[i] == '*') break;
            else dC++;
        }

        // Check all patterns.
        for(int i = 0; i < line.size(); i += dC + 1) {
            if(line[i] != '*') {
                cout << l << " NOT EVEN" << endl;
                goto done;
            } else sc++;
        }
        if(sc == star + 1) cout << l << " EVEN" << endl;
        else cout << l << " NOT EVEN" << endl;
        done:;
        l++;
    }


    return 0;
}