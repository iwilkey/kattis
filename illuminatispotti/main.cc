#include <iostream>
using namespace std;

// This solution is O(n^3) and while it's OK for the constraints of the problem, I am curious about a better time complexity.
int main(void) {
    int n;
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int k;
            cin >> k;
            mat[i][j] = k;
        }
    }
    // the idea here is to calculate mat^3, because the trace of that 
    // result will tell us how many length-3 walks each node has.
    int imme[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            imme[i][j] = 0;
            for(int k = 0; k < n; k++)
                imme[i][j] += mat[i][k] * mat[k][j];
        }
    int res[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            res[i][j] = 0;
            for(int k = 0; k < n; k++)
                res[i][j] += imme[i][k] * mat[k][j];
        }
    // calc the trace of res; count all the ways one can take a 3 step path from i back to i.
    int trace = 0;
    for(int i = 0; i < n; i++)
        trace += res[i][i];
    // div 6 not to double count in undirected graph: 3 nodes * 2 directions.
    cout << (trace / 6) << endl;
    return 0;
}
