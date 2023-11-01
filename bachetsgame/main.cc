/**
* Solving: https://open.kattis.com/problems/bachetsgame
* @author Ian Wilkey (iwilkey)
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(void) {
    int n, m;
    while(cin >> n >> m) {
        set<int> allowed;
        for(int i = 0; i < m; i++) {
            int mm;
            cin >> mm;
            allowed.insert(mm);
        }
        vector<bool> pos(n + 1, false);
        for(int i = 1; i <= n; i++)
            for(int move : allowed)
                if(i - move >= 0 && !pos[i - move]) {
                    pos[i] = true;
                    break;
                }
        if(!pos[n]) cout << "Ollie wins" << endl;
        else cout << "Stan wins" << endl;
    }
    return 0;
}
