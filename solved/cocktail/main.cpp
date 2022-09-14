#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

    int p, t; cin >> p >> t;
    vector<int> effect;
    for(int i = 0; i < p; i++) {
        static int in;
        cin >> in;
        effect.push_back(in);
    }

    sort(effect.begin(), effect.end());

    for(int i = 0; i < p; i++) 
        if(effect[i] - (t * i) <= 0) {
            cout << "NO" << endl;
            return 0;
        }
        
    cout << "YES" << endl;
    return 0;
}