#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main(int argc, char ** argv) {
    int p; cin >> p;
    unordered_map<string, string> spec;

    for(int i = 0; i < p; i++) {
        string name;
        cin >> name;
        int ss;
        cin >> ss;
        for(int j = 0; j < ss; j++) {
            string species;
            cin >> species;
            spec[species] = name;
        }
    }

    map<string, int> ans; // Using std::map for sorted planet names
    int v; cin >> v;

    for(int i = 0; i < v; i++) {
        int nn;
        cin >> nn;
        string sss;
        cin >> sss;

        if(spec.find(sss) == spec.end()) {
            // Handle unknown species, if necessary
            continue; // In this case, simply skip
        }

        ans[spec[sss]] += nn; // Using map will initialize the count to 0 if it doesn't exist
    }

    for(const auto & a : ans) {
        cout << a.first << " " << a.second << endl;
    }

    return 0;
}
