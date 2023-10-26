#include <iostream>
#include <vector>
#include <bitset>
#include <math.h>
#include <climits>
using namespace std;

struct ingre {
    int s, b;
};

int main(void) {
    int n; cin >> n;
    vector<struct ingre> pos;
    for(int i = 0; i < n; i++) {
        struct ingre ii;
        cin >> ii.s >> ii.b;
        pos.push_back(ii);
    }
    bitset<10> counter(0);
    int min = INT_MAX;
    for(int i = 1; i < (int)pow(2, n); i++) {
        counter = i;
        string bits = counter.to_string();
        vector<struct ingre> recipe;
        for(int i = 0; i < pos.size(); i++)
            if(bits[10 - i - 1] == '1')
                recipe.push_back(pos[i]);
        int sour = recipe[0].s,
            bitter = recipe[0].b, 
            diff = 0;
        for(int in = 1; in < recipe.size(); in++) {
            sour *= recipe[in].s;
            bitter += recipe[in].b;
        }
        diff = abs(sour - bitter);
        if(diff < min) min = diff;
    }
    cout << min << endl;
    return 0;
}
