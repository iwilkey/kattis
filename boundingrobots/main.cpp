#include <iostream>
#include <unordered_map>
using namespace std;

void clamp(int & num, int low, int high) {
    if(num > high) num = high;
    else if(num < low) num = low;
}

int main(void) {

    unordered_map<char, pair<int, int> > move;
    move['u'] = make_pair(1, 0);
    move['d'] = make_pair(-1, 0);
    move['l'] = make_pair(0, -1);
    move['r'] = make_pair(0, 1);

    while(true) {
        int w, l, dir; cin >> w >> l;
        if(!w && !l) break;
        cin >> dir;
        pair<int, int> pos[2] = { make_pair(0, 0) };
        for(int i = 0; i < dir; i++) {
            static char x; 
            static int y;
            cin >> x >> y;
            pos[0].first += (move[x].first * y);
            pos[0].second += (move[x].second * y);
            pos[1].first += (move[x].first * y);
            pos[1].second += (move[x].second * y);
            clamp(pos[1].first, 0, l - 1);
            clamp(pos[1].second, 0, w - 1);
        }
        cout << "Robot thinks " << pos[0].second << " " << pos[0].first << endl;
        cout << "Actually at " << pos[1].second << " " << pos[1].first << endl << endl;
    }

    return 0;
}
