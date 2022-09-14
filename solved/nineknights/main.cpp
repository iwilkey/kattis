#include <iostream>
#include <vector>
using namespace std;

const int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 },
    dy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };

int main(void) {

    vector<string> board;
    for(int i = 0; i < 5; i++) {
        static string in;
        getline(cin, in);
        board.push_back(in);
    }

    int c = 0;
    for(int y = 0; y < 5; y++) {
        for(int x = 0; x < 5; x++) {
            if(board[y][x] == '.') continue;
            if(board[y][x] == 'k') {
                c++;
                for(int i = 0; i < 8; i++) {
                    int xx = x + dx[i],
                        yy = y + dy[i];
                    if(xx >= 5) continue;
                    if(yy >= 5) continue;
                    if(xx < 0) continue;
                    if(yy < 0) continue;
                    if(board[yy][xx] == 'k') {
                        cout << "invalid" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    if(c == 9) cout << "valid" << endl;
    else cout << "invalid" << endl;
    return 0;
}