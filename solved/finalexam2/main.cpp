#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int c; cin >> c;
    vector<char> ans;
    for(int i = 0; i < c; i++) {
        static char in; cin >> in;
        ans.push_back(in);
    }
    int right = 0;
    for(int i = 0; i < c - 1; i++)
        if(ans[i] == ans[i + 1])
            right++;

    cout << right << endl;
    return 0;
}
