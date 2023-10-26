#include <iostream>
using namespace std;

int main(void) {
    int bites; cin >> bites;
    for(int i = 1; i <= bites; i++) {
        static string in;
        cin >> in;
        if(in == "mumble") continue;
        else if(stoi(in) != i) {
            cout << "something is fishy" << endl;
            return 0;
        }
    }
    cout << "makes sense" << endl;
    return 0;
}