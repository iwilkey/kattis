#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    string stored, input;
    cin >> stored >> input;
    if(stored == input) {
        cout << "YES" << endl;
        return 0;
    }
    vector<string> valid;
    for(char c = '0'; c <= '9'; c++) {
        string prepend = input,
            append = input;
        append.push_back(c);
        prepend.insert(prepend.begin(), c);
        valid.push_back(prepend);
        valid.push_back(append);
    }
    string reverse = input;
    for(char &c : reverse) {
        if(c >= 'a' && c <= 'z')
            c += 'A' - 'a';
        else if(c >= 'A' && c <= 'Z')
            c -= 'A' - 'a';
    }
    valid.push_back(reverse);
    for(string s : valid)
        if(s == stored) {
            cout << "YES" << endl;
            return 0;
        }
    cout << "NO" << endl;
    return 0;
}
