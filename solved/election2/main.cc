#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(void) {
    int c;
    cin >> c;
    cin.ignore(80, '\n');
    unordered_map<string, string> candidate;
    vector<pair<int, string>> partyTally;
    for(int i = 0; i < c; i++) {
        string name, part;
        getline(cin, name);
        getline(cin, part);
        candidate[name] = part;
    }
    int votes;
    cin >> votes;
    cin.ignore();
    for(int i = 0; i < votes; i++) {
        string vote;
        getline(cin, vote);
        for(auto & p : partyTally) {
            if(p.second == candidate[vote]) {
                p.first++;
                goto next;
            }
        }
        partyTally.push_back(make_pair(1, candidate[vote]));
        next:;
    }
    sort(partyTally.begin(), partyTally.end());
    if(partyTally[partyTally.size() - 1].first == partyTally[partyTally.size() - 2].first) 
        cout << "tie" << endl;
    else cout << partyTally[partyTally.size() - 1].second << endl;
    return 0;
}
