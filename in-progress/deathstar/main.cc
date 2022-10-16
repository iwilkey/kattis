#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int n; cin >> n;
    static vector< vector<int> > mat(n, vector<int>(n, -1));
    for(int y = 0; y < n; y++)
        for(int x = 0; x < n; x++) 
            cin >> mat[y][x];
        
    return 0;
}
