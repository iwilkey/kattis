#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

    int i, b; cin >> i >> b;
    vector<string> adj(i, string(i, '0'));
    for(int y = 0; y < i; y++)
        for(int x = 0; x < i; x++) 
            if(y == x) adj[y][x] = '1';
    for(int f = 0; f < b; f++) {
        static int a, b;
        cin >> a >> b;
        adj[a - 1][b - 1] = '1';
        adj[b - 1][a - 1] = '1';
    }

    bool pass = true;
    for(int f = 0; f < i - 1; f++) {
        pass = (adj[f + 1][f] == '1' && adj[f][f + 1] == '1');
        if(!pass) goto bypass;
    }

    bypass:;
    if(!pass) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}
