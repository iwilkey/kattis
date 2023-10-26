#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int s;
    cin >> s;
    int list[3][s];
    for(int i = 0; i < 3; i++) 
        for(int j = 0; j < s; j++) 
            cin >> list[i][j];
    for(int j = 0; j < s; j++) {
        int dist[3];
        for(int i = 0; i < 3; i++) 
            dist[i] = list[i][j];
        sort(dist, dist + 3);
        cout << dist[1] << " ";
    }
    cout << endl;
    return 0;
}
