#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int r, n; cin >> r >> n;
    vector<int> booked;
    for(int i = 0; i < n; i++) {
        static int in; cin >> in;
        booked.push_back(in);
    }
    for(int i = 1; i <= r; i++) {
        for(int ii = 0; ii < n; ii++) 
            if(i == booked[ii]) 
                goto next;
        cout << i << endl;
        return 0;
        next:;
    }
    cout << "too late" << endl;
    return 0;
}