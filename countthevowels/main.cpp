#include <iostream>
using namespace std;

void toLower(string & m) {
    for(char & c : m) 
        if(c >= 'A' && c <= 'Z')
            c -= 'Z' - 'z';
    return;
}

int main(void) {
    const char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
    string line;
    getline(cin, line);
    toLower(line);
    int count = 0;
    for(char c : line)
        for(int i = 0; i < 5; i++) 
            if(c == vowels[i]) {
                count++;
                break;
            }
    cout << count << endl;
    return 0;
}
