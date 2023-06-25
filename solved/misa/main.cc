#include <iostream>
#include <vector>
using namespace std;

#define ll long long

const ll dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
const ll dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

ll find_num_handshakes(vector<string> & map) {
    ll shakes = 0;
    // Find shakes iteratively with current map.
    for(ll y = 0; y < map.size(); y++) {
        for(ll x = 0; x < map[0].size(); x++) {
            if(map[y][x] != 'o')
                continue;
            map[y][x] = '.';
            for(ll i = 0; i < 8; i++) {
                ll nx = x + dx[i];
                ll ny = y + dy[i];
                if(nx < 0 || nx >= map[0].size() || ny < 0 || ny >= map.size())
                    continue;
                if(map[ny][nx] == 'o')
                    shakes++;
            }
        }
    }
    return shakes;
}

pair<ll, ll> find_best_placement(vector<string> map) {
    pair<ll, ll> best_xy = make_pair(0, 0);
    ll best_shakes = 0;
    for(ll y = 0; y < map.size(); y++) {
        for(ll x = 0; x < map[0].size(); x++) {
            if(map[y][x] != '.')
                continue;
            // Count the number of people around this spot and see if it's the best.
            ll count = 0;
            for(ll d = 0; d < 8; d++) {
                ll nx = x + dx[d];
                ll ny = y + dy[d];
                if(nx < 0 || nx >= map[0].size() || ny < 0 || ny >= map.size())
                    continue;
                if(map[ny][nx] == 'o')
                    count++;
            }
            if(count > best_shakes) {
                best_shakes = count;
                best_xy = make_pair(x, y);
            }
        }
    }
    return best_xy;
}

int main(void) {
    ll r, c;
    cin >> r >> c;
    vector<string> grid(r);
    for(ll i = 0; i < r; i++)
        cin >> grid[i];
    // Find the best place for the man and place him there.
    pair<ll, ll> best = find_best_placement(grid);
    grid[best.second][best.first] = 'o';
    // Find the number of shakes that occur.
    ll shakes = find_num_handshakes(grid);
    cout << shakes << endl;
    return 0;
}
