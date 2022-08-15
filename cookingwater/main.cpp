#include <iostream>
#include <vector>
using namespace std;

bool overlapsWith(vector<pair<int, int>> times, pair<int, int> time) {
    // just need to find one time that doesnt overlap...
    for(pair<int, int> t : times) {
        int st1 = t.first, ft1 = t.second,
            st2 = time.first, ft2 = time.second;
        if((st1 > ft2) || (st2 > ft1)) return false;
    }
    return true;
}

int main(void) {
    int b; cin >> b;
    vector<pair<int, int>> overlaps;
    for(int i = 0; i < b; i++) {
        static int st, fi;
        cin >> st >> fi;
        if(i == 0) {
            overlaps.push_back(make_pair(st, fi));
            continue;
        }
        if(!overlapsWith(overlaps, make_pair(st, fi))) {
            cout << "edward is right" << endl;
            return 0;
        } 
        overlaps.push_back(make_pair(st, fi));
    }
    cout << "gunilla has a point" << endl;
    return 0;
}
