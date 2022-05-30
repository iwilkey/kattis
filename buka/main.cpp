#include <iostream>
using namespace std;

int main(void) {
    string a, o, b;
    cin >> a >> o >> b;
    if(o[0] == '*') {
        int z[2] = { 0 };
        for(char c : a) if(c == '0') z[0]++;
        for(char c : b) if(c == '0') z[1]++;
        cout << 1; for(int i = 0; i < z[0] + z[1]; i++) cout << 0;
        cout << endl;
    } else {
        string * str = ((a.size() < b.size()) ? &a : &b);
        while(a.size() != b.size())
            (*str).insert(0, "0");
        for(int i = 0; i < a.size(); i++) 
            cout << ((a[i] - '0') + (b[i] - '0'));
        cout << endl;
    }
}
