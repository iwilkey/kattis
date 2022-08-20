#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void replaceAll(string & s, string const & toReplace, string const & replaceWith) {
    ostringstream oss;
    size_t pos = 0,
           prevPos = pos;
    while(true) {
        prevPos = pos;
        pos = s.find(toReplace, pos);
        if(pos == string::npos) break;
        oss << s.substr(prevPos, pos - prevPos);
        oss << replaceWith;
        pos += toReplace.size();
    }
    oss << s.substr(prevPos);
    s = oss.str();
}

int main(void) {
    int n;
    string word;
    cin >> n >> word;
    for(int i = n; i >= 1; i--) {
        string phrase = "";
        if(i != 1) {
            phrase += to_string(i) + " bottles of milk on the wall, " + to_string(i) + " bottles of milk.\n";
            if(i != 2) phrase += "Take one down, pass it around, " + to_string(i - 1) + " bottles of milk on the wall.";
            else phrase += "Take one down, pass it around, 1 bottle of milk on the wall.";
        } else {
            phrase += "1 bottle of milk on the wall, 1 bottle of milk.\n";
            phrase += "Take it down, pass it around, no more bottles of milk.";
        }
        replaceAll(phrase, "milk", word);
        cout << phrase << endl;
        if(i != 1) cout << endl;
    }
    return 0;
}
