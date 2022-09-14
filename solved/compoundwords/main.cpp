#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    string imme;
    vector<string> rawWords, compound;
    while(cin >> imme) rawWords.push_back(imme);
    for(int i = 0; i < rawWords.size(); i++) {
        for(int j = 0; j < rawWords.size(); j++) {
            if(i == j) continue;
            string word = rawWords[i] + rawWords[j];
            for(string s : compound) 
                if(s == word) 
                    goto next;
            compound.push_back(word);
            next:;
        }
    }
    sort(compound.begin(), compound.end());
    for(string s : compound)
        cout << s << endl;
    return 0;
}
