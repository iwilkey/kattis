#include <iostream>
#include <vector>
using namespace std;

bool addWater(vector<string> & map, int y, int x) {
    if(map[y][x] == 'V') 
        return false;
    map[y][x] = 'V';
    return true;
}

int main(void) {
    
    int h, w; cin >> h >> w;
    vector<string> grid;
    for(int i = 0; i < h; i++) {
        static string line;
        cin >> line;
        grid.push_back(line);
    }

    while(true) {
        bool waterAdded = false,
            wasChanged = false;
        for(int y = 0; y < h; y++) {
            for(int x = 0; x < w; x++) {
                if(grid[y][x] == 'V') {
                    if(y + 1 < h)
                        if(grid[y + 1][x] == '.') {
                            waterAdded = addWater(grid, y + 1, x);
                            if(waterAdded) wasChanged = true;
                        } else if(grid[y + 1][x] == '#') {
                            if(x + 1 < w) {
                                if(grid[y][x + 1] != '#') {
                                    waterAdded = addWater(grid, y, x + 1);
                                    if(waterAdded) wasChanged = true;
                                }
                            }
                            if(x - 1 >= 0) { 
                                if(grid[y][x - 1] != '#') {
                                    waterAdded = addWater(grid, y, x - 1);
                                    if(waterAdded) wasChanged = true;
                                }
                            }
                        } 

                }
            }
        }
        if(!wasChanged) break;
    }

    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) 
            cout << grid[y][x];
        cout << endl;
    }

    return 0;
}
