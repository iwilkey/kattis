#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
    int o, s, f = 0; cin >> o >> s;
    unordered_map<int, string> map;
    for(int i = 0; i < s; i++) {
        static int o;
        cin >> o;
        if(map[o] == "") {
            map[o] = "found";
            f++;
        }
    }
    for(int i = 0; i < o; i++)
        if(map[i] == "") 
            cout << i << endl;
    cout << "Mario got " + to_string(f) + " of the dangerous obstacles." << endl;    
    return 0;
}
