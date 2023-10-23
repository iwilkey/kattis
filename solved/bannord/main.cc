#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(const string & in, const char dlm) {
    vector<string> ret;
    string imme;
    stringstream stream(in);
    while(getline(stream, imme, dlm))
        ret.push_back(imme);
    return ret;
}

int main(void) {
    string fl;
    cin >> fl;
    cin.ignore();
    string memo;
    getline(cin, memo);
    vector<string> tok = split(memo, ' ');
    for(string & t : tok) {
        for(int i = 0; i < t.size(); i++) {
            for(int c = 0; c < fl.size(); c++) {
                if(t[i] == fl[c]) {
                    // Banned.
                    cout << string(t.size(), '*') << " ";
                    goto banned;
                }
            }
        }
        cout << t << " ";
        banned:;
    }
    cout << endl;
    return 0;
}
