#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string line) {
    vector<string> ret;
    stringstream ss(line);
    string imme;
    while(getline(ss, imme, ' '))
        ret.push_back(imme);
    return ret;
}

const string vow = "aeiouy";
bool vowel(char c) {
    for(char cc : vow)
        if(c == cc) return true;
    return false;
}

string pig(string word) {
    if(vowel(word[0])) word += "yay";
    else {
        for(int i = 0; i < word.size(); i++)
            if(vowel(word[i])) {
                string front = word.substr(0, i);
                word = word.substr(i, word.size() - i);
                word += front + "ay";
                break;
            }
    }
    return word;
}

int main(void) {

    while(!cin.eof()) {
        static string line;
        getline(cin, line);
        vector<string> words = split(line);
        for(string word : words)
            cout << pig(word) << " ";
        cout << endl;
    }

    return 0;
}