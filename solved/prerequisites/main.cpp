#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    
    while(!cin.eof()) {
        int k, m; cin >> k;
        if(k == 0) break;
        cin >> m;

        vector<int> taken;
        for(int i = 0; i < k; i++) {
            static int in; cin >> in;
            taken.push_back(in);
        }

        // For each catagory...
        bool ok = true;
        for(int i = 0; i < m; i++) {
            static int am, req; cin >> am >> req;
            int reqC = 0;
            for(int ii = 0; ii < am; ii++) {
                static int cla; cin >> cla;
                for(int c : taken) 
                    if(c == cla) 
                        reqC++;
            }
            if(reqC < req) 
                ok = false;
        }
        if(ok) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}