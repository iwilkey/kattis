#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n; cin >> n;
    static vector<int> code(n, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            static int num;
            cin >> num;
            code[i] |= num;
        }
    }
    for(int i : code) cout << i << " ";
    cout << endl;
    return 0;
}
