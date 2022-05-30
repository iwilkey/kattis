#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;

vector<string> tokenize(string & line) {
    vector<string> ret;
    string imme;
    stringstream check(line);
    while(getline(check, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {
    int lines; cin >> lines;
    cin.ignore();
    unordered_map<string, string> axioms;
    for(int i = 0; i < lines; i++) {
        static string line;
        getline(cin, line);
        vector<string> tokens = tokenize(line);
        if(tokens[0] == "->") {
            // declaration of axiom.
            axioms[tokens[1]] = "a";
            continue;
        } else {
            bool fail = false;
            for(string t : tokens) {
                if(t == "->") break;
                if(axioms[t] == "") {
                    fail = true;
                    break;
                }
            }
            if(fail) {
                cout << i + 1 << endl;
                return 0;
            } else axioms[tokens[tokens.size() - 1]] = "a";
        }
    }
    cout << "correct" << endl;
    return 0;
}
