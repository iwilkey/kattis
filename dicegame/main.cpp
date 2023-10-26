#include <iostream>
using namespace std;

int main(void) {

    int dice[8], s[2] = { 0, 0 };
    for(int i = 0; i < 8; i++) 
        cin >> dice[i];
    for(int i = 0; i < 4; i++) {
        s[0] += dice[i];
        s[1] += dice[i + 4];
    }
    if(s[0] > s[1]) cout << "Gunnar" << endl;
    else if(s[0] < s[1]) cout << "Emma" << endl;
    else cout << "Tie" << endl;

    return 0;
}