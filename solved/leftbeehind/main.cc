#include <iostream>
using namespace std;

int main(void) {

    while(true) {
        int swe, sou;
        cin >> swe >> sou;
        if(!swe && !sou) break;
        if(swe + sou == 13) cout << "Never speak again." << endl;
        else if(swe < sou) cout << "Left beehind." << endl;
        else if(sou == swe) cout << "Undecided." << endl;
        else cout << "To the convention." << endl;
    }

    return 0;
}