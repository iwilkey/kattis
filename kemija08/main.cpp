#include <iostream>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' 
        || c == 'i' || c == 'o' || c == 'u';
}
int main(void) {

    string line;
    getline(cin, line);
    for(int c = 0; c < line.size(); c++) {
        if(isVowel(line[c])) {
            line.erase(line.begin() + c + 1);
            line.erase(line.begin() + c + 1);
        }
    }
    cout << line << endl;

    return 0;
}
