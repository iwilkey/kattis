/**
 * Solving: https://open.kattis.com/problems/mylla2
 * Author Ian Wilkey (iwilkey)
*/

#include <iostream>
using namespace std;

/**
 * This is one of those questions where we just check every outcome (there's only 8.)
 * Time complexity: O(3).
 */
int main(void) {
    string board[3];
    for(int i = 0; i < 3; i++)
        cin >> board[i];
    bool diag1 = board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O';
    bool diag2 = board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O';
    if(diag1 || diag2)
        goto won;
    for(int i = 0; i < 3; i++) {
        bool hor = board[i] == "OOO";
        bool vert = board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O';
        if(hor || vert)
            goto won;
    }
    cout << "Neibb" << endl;
    return 0;
    won:;
    cout << "Jebb" << endl;
    return 0;
}
