#include <iostream>
using namespace std;

int main(void) {
    int s;
    cin >> s;
    int rl = 0;
    int tb = 0;
    for(int i = 0; i < s; i++) {
        static string sword;
        cin >> sword;
        for(int j = 0; j < 4; j++) 
            if(sword[j] == '0') {
                if(j < 2)
                    tb++;
                else rl++;
            }
    }
    int swords = min(rl, tb) / 2;
    rl -= swords * 2;
    tb -= swords * 2;
    cout << swords << " " << tb << " " << rl << endl;
    return 0;
}
