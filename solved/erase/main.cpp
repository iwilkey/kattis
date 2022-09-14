#include <iostream>
using namespace std;

int main(void) {

    int times = 0; cin >> times;
    cin.ignore();
    string test, check;
    getline(cin, test); getline(cin, check);

    for(int i = 0; i < times; i++) {
        for(char & c : test) {
            if(c == '1') c = '0';
            else c = '1';
        }
    }

    if(test == check) cout << "Deletion succeeded" << endl;
    else cout << "Deletion failed" << endl;

    return 0;
}
