#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int house = 1;
    while(true) {

        int c, r; cin >> c >> r;
        if(!c && !r) break;

        cout << "HOUSE " << house << endl;
        house++;

        vector<string> map;
        pair<int, int> start = make_pair(-1, 0);
        for(int y = 0; y < r; y++) {
            static string in;
            cin >> in;
            if(start.first == -1) 
                for(int cc = 0; cc < c; cc++) {
                    if(in[cc] == '*') {
                        start = make_pair(cc, y);
                        break;
                    }       
                }
            map.push_back(in);
        }

        //          x   y
        const pair<int, int> dir[4] = {
            make_pair(0, -1), // UP
            make_pair(0, 1), // DOWN
            make_pair(-1, 0), // LEFT
            make_pair(1, 0) // RIGHT
        };
        
        pair<int, int> cdir, currloc = start;
        if(start.first == 0) cdir = dir[3];
        else if(start.first == c - 1) cdir = dir[2];
        else if(start.second == 0) cdir = dir[1];
        else if(start.second == r - 1) cdir = dir[0];

        while(true) {
            currloc.first += cdir.first;
            currloc.second += cdir.second;
            if(map[currloc.second][currloc.first] == '\\') {
                if(cdir == dir[0]) cdir = dir[2];
                else if(cdir == dir[1]) cdir = dir[3];
                else if(cdir == dir[2]) cdir = dir[0];
                else cdir = dir[1];
            } else if(map[currloc.second][currloc.first] == '/') {
                if(cdir == dir[0]) cdir = dir[3];
                else if(cdir == dir[1]) cdir = dir[2];
                else if(cdir == dir[2]) cdir = dir[1];
                else cdir = dir[0];
            } else if(map[currloc.second][currloc.first] == 'x') {
                map[currloc.second][currloc.first] = '&';
                break;
            }
        }

        for(int y = 0; y < r; y++) {
            for(int x = 0; x < c; x++) 
                cout << map[y][x];
            cout << endl;
        }
    }
    return 0;
}
