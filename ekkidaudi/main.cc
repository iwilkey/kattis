#include <iostream>
using namespace std;

int main(void) {
    string l1, l2;
    getline(cin, l1);
    getline(cin, l2);
    int b1 = -1;
    int b2 = -1;
    for(int i = 0; i < l1.size(); i++) {
        if(l1[i] == '|') {
            b1 = i + 1;
            break;
        }
        cout << l1[i];
    }
    for(int i = 0; i < l2.size(); i++) {
        if(l2[i] == '|') {
            b2 = i + 1;
            break;
        }
        cout << l2[i];
    }
    cout << " ";
    for(int i = b1; i < l1.size(); i++)
        cout << l1[i];
    for(int i = b2; i < l2.size(); i++)
        cout << l2[i];
    cout << endl;
    return 0;
}
