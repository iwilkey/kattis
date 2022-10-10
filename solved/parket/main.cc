// https://open.kattis.com/problems/parket

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int o, i;
    cin >> o >> i;
    vector<int> factors;
    for(int ii = 3; ii < (o + i); ii++)
        if(!((o + i) % ii))
            factors.push_back(ii);
    int w = 0, l = 0;
    for(int y = 0; y < factors.size(); y++) {
        for(int x = 0; x < factors.size(); x++) {
            if((factors[y]) * (factors[x]) != (o + i)) continue;
            if((factors[y] - 2) * (factors[x] - 2) == i) {
                w = factors[x];
                l = factors[y];
                break;
            }
        }
    }
    out:;
    cout << ((w > l) ? w : l) 
        << " " << ((w < l) ? w : l) << endl;
    return 0;
}
