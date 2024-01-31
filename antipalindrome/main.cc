#include <iostream>
#include <string>
using namespace std;

bool pal(const string & s) {
    int i = 0;
    int j = s.length() - 1;
    while(i < j) {
        while(i < j && !isalnum(s[i])) i++;
        while(i < j && !isalnum(s[j])) j--;
        if(tolower(s[i]) != tolower(s[j]))
            return false;
        i++;
        j--;
    }
    return true;
}

int main(void) {
    string in;
    getline(cin, in);
    string phrase = "";
    for(char c : in)
        if(c != ' ')
            phrase += c;
    for(int i = 0; i < phrase.size(); i++) {
        for(int j = i + 3; j <= phrase.size(); j++) {
            string curr = phrase.substr(i, j - i);
            if(pal(curr)) {
                cout << "Palindrome" << endl;
                return 0;
            }
        }
    }
    cout << "Anti-palindrome" << endl;
    return 0;
}
