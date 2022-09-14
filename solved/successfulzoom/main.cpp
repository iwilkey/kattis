#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int n; cin >> n;
    vector<int> list;
    for(int i = 0; i < n; i++) {
        static int in;
        cin >> in;
        list.push_back(in);
    }

    int k = 1;
    while(true) {
        if((2 * k) > n) {
            cout << "ABORT!" << endl;
            return 0;
        }
        int l = -1, e = 0;
        for(int kk = k; kk <= n; kk += k) {
            if(list[kk - 1] > l) {
                e++;
                l = list[kk - 1];
            } else goto nextK;
        }
        if(e >= 2) {
            cout << k << endl;
            return 0;
        }
        nextK:
        k++;
    }

    return 0;
}
