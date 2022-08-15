#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int m, n, u, l, r, d;
    cin >> m >> n;
    cin >> u >> l >> r >> d;
    vector<string> crossword;
    for(int i = 0; i < m; i++) {
        static string in; cin >> in;
        crossword.push_back(in);
    }

    vector<string> frame(u + m + d, string('.', l + n + r));
    bool h = true;
    for(int i = 0; i < u + m + d; i++) {
        for(int j = 0; j < l + n + r; j++) {
            frame[i][j] = (h) ? '#' : '.';
            h = !h;
        }
        if((l + n + r) % 2 == 0) h = !h;
    }

    for(int i = 0; i < m; i++) 
        for(int c = 0; c < n; c++) 
            frame[u + i][l + c] = crossword[i][c];
        
    for(string s : frame)
        cout << s << endl;

    return 0;
}