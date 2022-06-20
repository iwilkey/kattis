#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
    bool define = true;
    unordered_map<string, string> dictionary;
    while(!cin.eof()) {
        static string line;
        getline(cin, line);
        if(line == "") {
            define = false;
            continue;
        }
        if(define) dictionary[line.substr(line.find(' ') + 1, line.size() - line.find(' ') + 1)] = line.substr(0, line.find(' '));
        else {
            if(dictionary[line] == "") cout << "eh" << endl;
            else cout << dictionary[line] << endl;
        }
    }
    return 0;
}