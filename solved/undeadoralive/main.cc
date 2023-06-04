#include <iostream>
using namespace std;

int main(void) {
    string in;
    getline(cin, in);
    bool smile = false;
    bool frown = false;
    for(unsigned i = 0; i < in.size() - 1; i++) {
        string sub = in.substr(i, 2);
        if(sub == ":)") smile = true;
        else if(sub == ":(") frown = true;
    }
    if(smile && !frown) cout << "alive" << endl;
    else if(!smile && frown) cout << "undead" << endl;
    else if(smile && frown) cout << "double agent" << endl;
    else cout << "machine" << endl;
    return 0;
}
