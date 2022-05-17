#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

vector<string> split(string in) {
    vector<string> ret;
    string imme;
    stringstream check(in);
    while(getline(check, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {

    //            food    people
    unordered_map<string, vector<string> > orders;
    while(true) {
        orders.clear();
        int order; cin >> order;
        if(!order) break;
        cin.ignore();

        for(int i = 0; i < order; i++) {
            static string line;
            getline(cin, line);
            vector<string> tokens = split(line);
            for(int i = 1; i < tokens.size(); i++)
                orders[tokens[i]].push_back(tokens[0]);
        }

        vector< pair<string, vector<string> > > elems(orders.begin(), orders.end());
        sort(elems.begin(), elems.end());

        for(auto entry : elems) {
            cout << entry.first <<  " ";
            for(string n : entry.second) cout << n << " ";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}