#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string line) {
    vector<string> ret;
    string imme;
    stringstream check(line);
    while(getline(check, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {

    string line;
    getline(cin, line);

    vector<string> words = split(line);
    int ae = 0;
    for(string word : words) {
        for(int c = 0; c < word.size() - 1; c++)
            if(word[c] == 'a' && word[c + 1] == 'e') {
                ae++;
                break;
            }
    }

    if(ae >= (float)(words.size() * 0.4f)) cout << "dae ae ju traeligt va" << endl;
    else cout << "haer talar vi rikssvenska" << endl;
    return 0;
}
