#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool comp(pair<long long int, int> p1, 
    pair<long long int, int> p2) {
    return p1.second > p2.second;
}

int main(void) {
    int n, k; cin >> n >> k;
    unordered_map<long long int, int> map;
    for(int i = 0; i < n; i++) {
        static long long int in;
        cin >> in;
        map[in]++;
    }
    vector<pair<long long int, int>> list(map.begin(), map.end());
    sort(list.begin(), list.end(), comp);
    for(int i = 0; i < k; i++) {
        if(list[1].second > list[0].second) {
            sort(list.begin(), list.end(), comp);
            i--;
            continue;
        }
        list[0].second--;
        if(list[0].second < 0) {
            list.erase(list.begin());
            i--;
        }
    }
    sort(list.begin(), list.end(), comp);
    cout << list[0].second << endl;

    return 0;
}
