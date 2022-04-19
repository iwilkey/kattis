// @author Ian Wilkey (iwilkey)

#include <iostream>
#include <string>
#include <bitset>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

template <typename T> 
void log(string tag, T obj) { 
    cout << tag << ": " << obj << endl; 
}

vector<string> tokenize(string line) {
    vector<string> ret;
    stringstream check(line);
    string word;
    while(getline(check, word, ' '))
        ret.push_back(word);
    return ret;
}

void toLower(string & in) {
    for(char & c : in) {
        if(c >= 'A' && c <= 'Z')
            c -= 'Z' - 'z';
    }
}

void solve(void) {
    
    vector<string> used;
    while(!cin.eof()) {
        string line;
        getline(cin, line);
        vector<string> words = tokenize(line);
        for(string & w : words) {
            string actual = w;
            toLower(w);
            bool found = false;
            for(string u : used)
                if(w == u) 
                    found = true;
            if(!found) {
                cout << actual << " ";
                used.push_back(w);
            } else cout << ". ";
        }
        cout << endl;
    }
    
    return;
}

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

int main(int argc, char ** args) {
    initIO(10);
    solve();
    return 0;
}
