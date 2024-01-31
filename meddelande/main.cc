#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        static string line;
        cin >> line;
        for(int j = 0; j < m; j++) {
            if(line[j] != '.')
                cout << line[j];
        }
    }
    cout << endl;
    return 0;
}
