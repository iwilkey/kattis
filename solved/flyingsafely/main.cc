#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, const vector< vector<int> > & adj_list, vector<bool> & visited, int & pilots_used) {
    visited[node] = true;
    for(int i = 0; i < adj_list[node].size(); i++) {
        if(!visited[adj_list[node][i]]) {
            pilots_used++;
            dfs(adj_list[node][i], adj_list, visited, pilots_used);
        }
    }
}

int main(void) {
    int c;
    cin >> c;
    for(int i = 0; i < c; i++) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > adj_list(n);
        for(int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            adj_list[a - 1].push_back(b - 1);
            adj_list[b - 1].push_back(a - 1);
        }
        vector<bool> visited(n, false);
        int ans = 0;
        dfs(0, adj_list, visited, ans);
        cout << ans << endl;
    }
    return 0;
}
