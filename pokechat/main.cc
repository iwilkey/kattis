#include <iostream>
using namespace std;

int main(void) {
    string key, code;
    getline(cin, key);
    getline(cin, code);
    for(int i = 0; i <= code.size() - 3; i += 3) 
        cout << key[stoi(code.substr(i, 3)) - 1];
    cout << endl;
    return 0;
}
