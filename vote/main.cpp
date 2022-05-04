#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        static int cand; cin >> cand;
        int max = 0, tv = 0;
        vector<int> mb;
        for(int ii = 0; ii < cand; ii++) {
            static int in; cin >> in;
            tv += in;
            if(in > max) {
                mb.clear();
                max = in;
                mb.push_back(ii);
            } else if(in == max) 
                mb.push_back(ii);
        }

        if(mb.size() == 1) {
            if(max > tv / 2) cout << "majority winner " << mb[0] + 1 << endl; 
            else cout << "minority winner " << mb[0] + 1 << endl;
        } else cout << "no winner" << endl;
    
    }

    return 0;
}