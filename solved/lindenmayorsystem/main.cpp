#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

vector<string> split(string in) {
    vector<string> ret;
    string imme;
    stringstream stream(in);
    while(getline(stream, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {
    int n, m; cin >> n >> m;
    cin.ignore();
    unordered_map<char, string> rules;
    for(int i = 0; i < n; i++) {
        static string in;
        getline(cin, in);
        vector<string> rule = split(in);
        rules[rule[0][0]] = rule[2];
    }
    string seed; cin >> seed;
    for(int i = 0; i < m; i++) {
        string iter;
        for(char c : seed) {
            if(rules[c] == "") iter += c;
            else iter += rules[c];
        }
        seed = iter;
    }
    cout << seed << endl;
    return 0;
}