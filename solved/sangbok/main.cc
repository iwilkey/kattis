#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(void) {
    ll m;
    ll n;
    cin >> m >> n;
    m *= 60;
    vector<ll> songs(n);
    for(ll nn = 0; nn < n; nn++)
        cin >> songs[nn];
    sort(songs.begin(), songs.end());
    ll ct = 0;
    for(int i = 0; i < n; i++) {
        if(ct + songs[i] <= m) ct += songs[i];
        else break;
    }
    cout << ct << endl;
    return 0;
}
