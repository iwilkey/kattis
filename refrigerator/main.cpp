#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct solution {
    int trips[2],
        cost;
};

bool lowCost(const struct solution & a, const struct solution & b) {
    return a.cost < b.cost;
}

int main(void) {

    int pa, ka, pb, kb, r; 
    cin >> pa >> ka >> pb >> kb >> r;

    vector<struct solution> sol;
    for(int a = 0; a < (int)(r / ka) + 1; a++) {
        for(int b = 0; b < (int)(r / kb) + 1; b++) {
            int f = (ka * a) + (kb * b);
            if(f >= r) {
                struct solution s;
                s.trips[0] = a; s.trips[1] = b; s.cost = (pa * a) + (pb * b);
                sol.push_back(s);
            }
        }
    }

    sort(sol.begin(), sol.end(), lowCost);
    cout << sol[0].trips[0] << " " << sol[0].trips[1] << " " << sol[0].cost << endl;

    return 0;
}
