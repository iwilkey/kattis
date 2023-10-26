#include <iostream>
using namespace std;

const string solved[4] = {
    "ABCD",
    "EFGH",
    "IJKL",
    "MNO."
};

pair<int, int> correct(char a) {
    for(int y = 0; y < 4; y++)
        for(int x = 0; x < 4; x++)
            if(solved[y][x] == a)
                return make_pair(x, y);
    return make_pair(-1, -1);
}

int dist(char a, int x, int y) {
    pair<int, int> targ = correct(a);
    return abs(x - targ.first) + abs(y - targ.second);
}

int main(void) {
    int sum = 0;
    for(int y = 0; y < 4; y++) {
        static string line;
        getline(cin, line);
        for(int x = 0; x < line.size(); x++) {
            if(line[x] == '.') continue;
            sum += dist(line[x], x, y);
        }
    }
    cout << sum << endl;
    return 0;
}