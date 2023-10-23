#include <iostream>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    for(int i = 0; i < s.size() - 2; i++) {
        if(s.substr(i, 3) == "COV") {
            cout << "Veikur!" << endl;
            return 0;
        }
    }
    cout << "Ekki veikur!" << endl;
    return 0;
}