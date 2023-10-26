// @author Ian Wilkey (iwilkey)

#include <iostream>
#include <string>
#include <bitset>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

template <typename T> 
void log(string tag, T obj) { 
    cout << tag << ": " << obj << endl; 
}

struct rect {
    int a, b, c, d;
};

void solve(void) {

    while(true) {
        
        int r; cin >> r;
        if(r == 0) 
            break;

        vector<struct rect> rects;
        int minX = 1000, maxX = 0,
            minY = 1000, maxY = 0;

        for(int i = 0; i < r; i++) {
            int a, b, c, d; cin >> a >> b >> c >> d;
            rect rr;
            rr.a = a; rr.b = b;
            rr.c = c; rr.d = d;
            if(a < minX) minX = a;
            if(b < minY) minY = b;
            if(c > maxX) maxX = c;
            if(d > maxY) maxY = d;
            rects.push_back(rr);
        }

        vector< vector<bool> > map;
        for(int yy = 0; yy < maxY; yy++) {
            vector<bool> start(maxX, false);
            map.push_back(start);
        }

        for(rect r : rects) 
            for(int yy = r.b; yy < r.d; yy++) 
                for(int xx = r.a; xx < r.c; xx++) 
                    map[yy][xx] = true;

        int count = 0;
        for(int yy = 0; yy < maxY; yy++) 
            for(int xx = 0; xx < maxX; xx++) 
                if(map[yy][xx]) 
                    count++;
        cout << count << endl;
    }

    return;
}

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

int main(int argc, char ** args) {
    initIO(10);
    solve();
    return 0;
}
