#include <iostream>
#include <vector>
using namespace std;

void encrypt(string m) {
    vector<int> v(m.size(), -1);
    for(int j = 0; j < 3; j++)
        for(int i = 0; i < v.size(); i++) {
            if(j == 0) v[i] = ((m[i] == ' ') ? 0 : ((int)(m[i] - 'a') + 1));
            else if(j == 1) v[i] += v[i - 1];
            else v[i] %= 27;
        }
    for(int c : v) cout << (char)((c == 0) ? ' ' : c + 'a' - 1); 
    cout << endl;
}

// return a which makes (a + m) % 27 = c
int inverseMod(int m, int c) {
    int a = 1;
    while((a + m) % 27 != c) a++;
    return a;
}

void decrypt(string m) {
    vector<int> v(m.size(), -1);
    for(int i = 0; i < v.size(); i++) v[i] = ((m[i] == ' ') ? 0 : ((int)(m[i] - 'a') + 1));
    vector<int> vv(m.size(), v[0]);
    for(int i = 1; i < v.size(); i++) vv[i] = (inverseMod(v[i - 1], v[i]) % 27) + vv[i - 1];
    for(int i = v.size() - 1; i >= 1; i--) vv[i] -= vv[i - 1];
    for(int c : vv) cout << (char)((c == 0) ? ' ' : c + 'a' - 1); 
    cout << endl;
}

int main(void) {
    int c; cin >> c;
    cin.ignore();
    for(int i = 0; i < c; i++) {
        static string line;
        getline(cin, line);
        char a = line[0];
        string m = line.substr(2, line.size() - 2);
        if(a == 'e') encrypt(m);
        else decrypt(m);
    }
    return 0;
}