#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

    int a; cin >> a; cin.ignore();
    string ans; getline(cin, ans);

    const string seq[3] = { "ABC", "BABC", "CCAABB" };
    int scores[3] = { 0 };
    int p = 0;
    for(char c : ans) {
        for(int i = 0; i < 3; i++)
            if(c == seq[i][p % seq[i].size()])
                scores[i]++;
        p++;
    }

    int max = *max_element(scores, scores + 3);
    cout << max << endl;
    for(int i = 0; i < 3; i++) {
        if(scores[i] == max) {
            switch(i) {
                case 0:
                    cout << "Adrian" << endl;
                    break;
                case 1:
                    cout << "Bruno" << endl;
                    break;
                case 2:
                    cout << "Goran" << endl;
                    break;
            }
        }
    }

    return 0;
}
