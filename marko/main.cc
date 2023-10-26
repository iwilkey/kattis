#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(void) {

    static unordered_map<int, string> keys;
    keys[2] = "abc";
    keys[3] = "def";
    keys[4] = "ghi";
    keys[5] = "jkl";
    keys[6] = "mno";
    keys[7] = "pqrs";
    keys[8] = "tuv";
    keys[9] = "wxyz";

    int w; cin >> w;
    vector<string> dict(w, "");
    for(int i = 0; i < w; i++)
        cin >> dict[i];
    string num;
    cin >> num;
    
    int vw = 0;
    for(string s : dict) {
        if(s.size() != num.size()) continue;
        for(int i = 0; i < num.size(); i++) {
            int key = num[i] - '0';
            for(char valid : keys[key]) 
                if(valid == s[i]) 
                    goto nextLetter;
            goto nextWord;
            nextLetter:;
        }   
        vw++;
        nextWord:;
    }
    cout << vw << endl;
    return 0;
}
