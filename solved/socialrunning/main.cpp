#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(void) {

    int n; cin >> n;
    vector<int> nodes;
    for(int i = 0; i < n; i++) {
        static int in;
        cin >> in;
        nodes.push_back(in);
    }

    int min = INT_MAX;
    for(int i = 0; i < n - 2; i++) 
        if(nodes[i] + nodes[i + 2] < min) 
            min = nodes[i] + nodes[i + 2];
    // two edge cases
    if(nodes[0] + nodes[n - 2] < min)
        min = nodes[0] + nodes[n - 2];
    if(nodes[1] + nodes[n - 1] < min)
        min = nodes[1] + nodes[n - 1];
        
    cout << min << endl;

    return 0;
}
