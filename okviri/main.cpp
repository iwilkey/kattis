#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    string phrase; cin >> phrase;
    int w = (phrase.size() * 5) - (1 * (phrase.size() - 1));
    vector<string> map(5, string(w, '.'));

    int let = 0;
    for(int y = 0; y < 5; y++) {
        int c = 0;
        for(int x = 2; x <= w; x += 4) {
            c++;
            if(y == 0) {
                map[y][x] = (c % 3 == 0) ? '*' : '#';
                for(int i = 1; i <= 2; i++) {
                    map[y + i][x - i] = ((i != 2) ? (c % 3 == 0) 
                        : (c % 3 == 0 || c % 3 == 1 && x != 2)) ? '*' : '#';
                    map[y + i][x + i] = (c % 3 == 0) ? '*' : '#';
                }
            } else if(y == 2) {
                map[y][x] = phrase[let];
                let++;
            } else if(y == 4) {
                map[y][x] = (c % 3 == 0) ? '*' : '#';
                map[y - 1][x - 1] = (c % 3 == 0) ? '*' : '#';
                map[y - 1][x + 1] = (c % 3 == 0) ? '*' : '#';
            }
        }
    }

    for(string s : map) {
        for(char c : s) 
            cout << c;
        cout << endl;
    }

    return 0;
}
