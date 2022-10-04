#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

vector<string> split(string line) {
    vector<string> ret;
    stringstream in(line);
    string imme;
    while(getline(in, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {
    while(true) {
        vector<int> num(32, -1);
        int inst;
        cin >> inst;
        cin.ignore();
        if(inst == 0) break;
        for(int ii = 0; ii < inst; ii++) {
            static string line;
            getline(cin, line);
            vector<string> tok = split(line);
            if(tok[0] == "SET") {
                int ind = stoi(tok[1]);
                num[ind] = 1;
            } else if(tok[0] == "CLEAR") {
                int ind = stoi(tok[1]);
                num[ind] = 0;
            } else if(tok[0] == "AND") {
                int i = stoi(tok[1]), j = stoi(tok[2]);
                if(num[i] == -1 && num[j] == -1) continue;
                if(num[i] != -1 && num[j] == -1) {
                    if(num[i] == 1) num[i] = -1;
                    continue;
                } else if(num[i] == -1 && num[j] != -1) {
                    if(num[j] == 0) num[i] = 0;
                    else if(num[j] == 1) num[i] = -1;
                    continue;
                } 
                num[i] &= num[j];
            } else {
                int i = stoi(tok[1]), j = stoi(tok[2]);
                if(num[i] == -1 && num[j] == -1) continue;
                if(num[i] != -1 && num[j] == -1) {
                    if(num[i] == 0) num[i] = -1;       
                    continue;
                } else if(num[i] == -1 && num[j] != -1) {
                    if(num[j] == 0) num[i] = -1;
                    else if(num[j] == 1) num[i] = 1;
                    continue;
                } 
                num[i] |= num[j];
            }
        }
        reverse(num.begin(), num.end());
        for(int n : num) {
            if(n != -1) cout << n;
            else cout << '?';
        }
        cout << endl;
    }
    return 0;
}
