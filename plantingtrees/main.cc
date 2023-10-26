#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int s; cin >> s;
    vector<int> p(s, 0);
    for(int i = 0; i < s; i++)
        cin >> p[i];
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    int max = 0;
    for(int i = 1; i <= s; i++) {
        if(i + p[i - 1] > max)
            max = i + p[i - 1];
    }
    cout << max + 1 << endl;
    return 0;
}
