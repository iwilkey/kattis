#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

vector<string> split(string word, char delim) {
    vector<string> ret;
    stringstream ss(word);
    string token;
    while(getline(ss, token, delim))
        ret.push_back(token);
    return ret;
}

int main(void) {
    string c_map;
    cin >> c_map;
    cin.ignore();
    string w_map;
    getline(cin, w_map);
    vector<string> w_map_split = split(w_map, ' ');
    unordered_map<string, char> map;
    int i = 0;
    for(string s : w_map_split) {
        if(i >= c_map.size())
            break;
        map[s] = c_map[i];
        i++;
    }
    string w_map_recreated;
    for(int i = 0; i < c_map.size(); i++) {
        char c = c_map[i];
        // Find the word that corresponds to this character.
        for(auto it = map.begin(); it != map.end(); it++) {
            if(it->second == c) {
                if(i != c_map.size() - 1)
                    w_map_recreated += it->first + " ";
                else 
                    w_map_recreated += it->first;
                break;
            }
        }
    }
    if(w_map_recreated != w_map) cout << "False" << endl;
    else cout << "True" << endl;
    return 0;
}
