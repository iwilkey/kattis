#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(void) {
    ll n;
    cin >> n;
    ll * odom = new ll[n];
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        cin >> odom[i];
        sum += odom[i];
    }
    unordered_map<ll, bool> m;
    for(ll i = 0; i < n; i++)
        m[sum - odom[i]] = true;
    delete [] odom;
    vector<pair<ll, bool> > v;
    v.reserve(m.size());
    v.insert(v.end(), m.begin(), m.end());
    sort(v.begin(), v.end());
    int s = v.size();
    cout << s << endl;
    for(ll i = 0; i < s; i++)
        if(i != s - 1)
            cout << v[i].first << " ";
        else
            cout << v[i].first << endl;
    return 0;
}
