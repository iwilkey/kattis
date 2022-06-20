#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> split(string line) {
    vector<string> ret;
    string imme;
    stringstream ss(line);
    while(getline(ss, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {
    int w, j; cin >> w >> j;
    cin.ignore();
    unordered_map<string, int> map;
    for(int i = 0; i < w; i++) {
        static string line;
        getline(cin, line);
        map[line.substr(0, line.find(' '))] = stoi(line.substr(line.find(' ') + 1, line.size() - line.find(' ') + 1));
    }

    long long int sal = 0;
    for(int i = 0; i < j; i++) {
        while(true) {
            static string line;
            getline(cin, line);
            if(line[0] == '.') break;
            vector<string> words = split(line);
            for(string word : words)
                sal += map[word];
        }
        cout << sal << endl;
        sal = 0;
    }

    return 0;
}