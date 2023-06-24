#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

int main(void) {
    string in;
    while(true) {
        getline(cin, in);
        if(in[0] == '0') 
            break; 
        int amt = -1;
        string phrase = "";
        int n = 0;
        for(char s : in) {
            if(s == ' ') {
                amt = stoi(in.substr(0, n));
                phrase = in.substr(n + 1, in.length() - 1);
                break;
            }
            n++;
        }
        reverse(phrase.begin(), phrase.end());
        for(char & s : phrase) {
            int index = alphabet.find(s);
            index = (index + amt) % alphabet.size();
            s = alphabet[index];
        }
        cout << phrase << endl;
    }
    return 0;
}
