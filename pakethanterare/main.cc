#include <iostream>
#include <unordered_map>
using namespace std;

#define ll long long

int main(void) {
    ll pt;
    ll stores;
    cin >> pt >> stores;
    ll * store_package_num = new ll[stores];
    for(ll i = 0; i < stores; i++)
        cin >> store_package_num[i];
    unordered_map<string, ll> package_reg;
    for(ll i = 0; i < pt; i++) {
        string package;
        ll ver;
        cin >> package >> ver;
        package_reg[package] = ver;
    }
    for(ll pack = 0; pack < stores; pack++) {
        int total_update = 0;
        for(ll c_pack = 0; c_pack < store_package_num[pack]; c_pack++) {
            string package;
            ll ver;
            cin >> package >> ver;
            if(package_reg[package] > ver) {
                total_update += (package_reg[package] - ver);
            }
        }
        cout << total_update << endl;
    }
    delete [] store_package_num;
    return 0;
}
