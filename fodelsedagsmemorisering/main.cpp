#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> split(string line) {
    vector<string> ret;
    stringstream split(line);
    string imme;
    while(getline(split, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {

    int f; cin >> f;
    cin.ignore();
    unordered_map<string, vector<pair<int, string> > > data;
    for(int i = 0; i < f; i++) {
        static string in;
        getline(cin, in);
        vector<string> tokens = split(in);
        data[tokens[2]].push_back(make_pair(stoi(tokens[1]), tokens[0]));
    }

    vector<string> out;
    for(auto & [key, value] : data) {
        sort(value.begin(), value.end());
        out.push_back(value[value.size() - 1].second);
    }

    sort(out.begin(), out.end());
    cout << out.size() << endl;
    for(string o : out) cout << o << endl;

    return 0;
}