#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(void) {
    int s, c, k; cin >> s >> c >> k;
    vector<int> colors;
    for(int i = 0; i < s; i++) {
        static int in;
        cin >> in;
        colors.push_back(in);
    }
    sort(colors.begin(), colors.end());
    int w = 0;
    while(true) {
        int ind = 0;
        for(int i = 1; i < colors.size(); i++) {
            if(ind + 1 >= c) break;
            if(abs(colors[i] - colors[0]) <= k) {
                ind = i;
            } else break;
        }
        w++;
        for(int i = 0; i <= ind; i++)
            colors.erase(colors.begin());
        if(colors.size() == 0) break;
    }
    cout << w << endl;
    return 0;
}
