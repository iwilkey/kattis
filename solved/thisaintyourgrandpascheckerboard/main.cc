#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int n; cin >> n;
    vector<string> grid;
    for(int i = 0; i < n; i++) {
        static string in;
        cin >> in;
        grid.push_back(in);
    }

    vector<string> gridT(n, string(n, '-'));
    for(int y = 0; y < n; y++)
        for(int x = 0; x < n; x++)
            gridT[y][x] = grid[x][y];

    for(int y = 0; y < n; y++) {
        int wr = 0;
        int br = 0;
        int wc = 0;
        int bc = 0;
        for(int x = 0; x < n; x++) {
            if(grid[y][x] == 'W') wr++;
            else if(grid[y][x] == 'B') br++;
            if(gridT[y][x] == 'W') wc++;
            else if(gridT[y][x] == 'B') bc++;
        }
        if((wr != br) || (wc != bc)) {
            cout << "0" << endl;
            return 0;
        }
    }

    // Check consecutive...
    for(int y = 0; y < n; y++) {
        for(int xx = 0; xx <= n - 3; xx++) {
            string checkRow = grid[y].substr(xx, 3);
            string checkCol = gridT[y].substr(xx, 3);
            if(checkRow == "WWW" || checkRow == "BBB" 
                || checkCol == "WWW" || checkCol == "BBB") {
                cout << "0" << endl;
            return 0;
            }
        }
    }

    cout << "1" << endl;

    return 0;
}
