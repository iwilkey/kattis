#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int r, c, dim; 
    cin >> r >> c >> dim;
    cin.ignore();
    vector<string> window;
    for(int y = 0; y < r; y++) {
        static string in;
        getline(cin, in);
        window.push_back(in);
    }

    pair<int, pair<int, int> > max = make_pair(0, make_pair(-1, -1));
    for(int y = 0; y <= r - dim; y++) {
        for(int x = 0; x <= c - dim; x++) {
            // Convolution...
            int flies = 0;
            for(int yy = 0; yy < dim; yy++) {
                for(int xx = 0; xx < dim; xx++) {
                    if(yy == 0 || xx == 0) continue;
                    if(yy == dim - 1 || xx == dim - 1) continue;
                    if(window[y + yy][x + xx] == '*')
                        flies++;
                }
            }
            // Check max flies...
            if(flies > max.first) {
                max.first = flies;
                max.second = make_pair(x, y);
            }
        }
    }

    cout << max.first << endl;
    for(int y = 0; y < r; y++) {
        for(int x = 0; x < c; x++) {
            if((x == max.second.first || x == max.second.first + dim - 1) 
                && (y == max.second.second || y == max.second.second + dim - 1)) cout << '+';
            else if((x == max.second.first || x == max.second.first + dim - 1) 
                && (y > max.second.second && y < max.second.second + dim - 1)) cout << '|';
            else if((y == max.second.second || y == max.second.second + dim - 1) 
                && (x > max.second.first && x < max.second.first + dim - 1)) cout << '-';
            else cout << window[y][x];
        }
        cout << endl;
    }

    return 0;
}
