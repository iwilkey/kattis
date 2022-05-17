#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void add(vector<string> & words, string line) {
    string imme;
    stringstream check(line);
    while(getline(check, imme, '#')) {
        if(imme.size() >= 2)
            words.push_back(imme);
    }
}

void lex(vector<string> & str) {
    string temp;
    for (int i = 0; i < str.size() - 1; ++i) {
        for (int j = 0; j < str.size() - 1 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main(void) {

    int r, c; 
    cin >> r >> c;
    vector<string> cross, words;
    for(int y = 0; y < r; y++) {
        static string in;
        cin >> in;
        cross.push_back(in);
        add(words, in);
    }
    
    string in;
    for(int x = 0; x < c; x++) {
        in.clear();
        for(int y = 0; y < r; y++) 
            in.push_back(cross[y][x]);
        add(words, in);
    }

    lex(words);
    cout << words[0] << endl;

    return 0;
}