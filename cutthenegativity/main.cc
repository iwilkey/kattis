#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int m;
    cin >> m;
    int map[m][m];
    vector<pair<int, int>> nonneg;
    for(int y = 0; y < m; y++)
        for(int x = 0; x < m; x++) {
            cin >> map[y][x];
            if(map[y][x] != -1)
                nonneg.push_back({y, x});
        }
        
    cout << nonneg.size() << endl;
    for(auto & i : nonneg)
        cout << i.first + 1 << " " << i.second + 1 << " " << map[i.first][i.second] << endl;

    return 0;
}
