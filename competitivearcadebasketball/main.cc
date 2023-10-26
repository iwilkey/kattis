#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
    int n, p, m;
    cin >> n >> p >> m;
    unordered_map<string, int> score;
    for(int i = 0; i < n; i++) {
        static string in;
        cin >> in;
        score[in] = 0;
    }
    bool win = false;
    for(int i = 0; i < m; i++) {
        static string person;
        static int points;
        cin >> person >> points;
        if(score[person] == -1) continue;
        score[person] += points;
        if(score[person] >= p) {
            cout << person << " wins!" << endl;
            score[person] = -1;
            win = true;
        }
    }
    if(!win)
        cout << "No winner!" << endl;

    return 0;
}
