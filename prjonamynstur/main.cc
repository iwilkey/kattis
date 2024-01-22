#include <iostream>
#include <map>
using namespace std;

int main(void) {
    map<char, int> prices;
    prices['.'] = 20;
    prices['O'] = 10;
    prices['\\'] = 25;
    prices['/'] = 25;
    prices['A'] = 35;
    prices['^'] = 5;
    prices['v'] = 22;
    int l, s, price = 0;
    cin >> l >> s;
    for(int ll = 0; ll < l; ll++) {
        static string line;
        cin >> line;
        for(int ss = 0; ss < s; ss++)
            price += prices[line[ss]];
    }
    cout << price << endl;
    return 0;
}
