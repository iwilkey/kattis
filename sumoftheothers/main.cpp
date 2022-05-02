#include <iostream>
#include <vector>
#include <sstream>
using namespace std; // standard namespace.

int main(int argc, char ** args) {

    string s;
    while(getline(cin, s)) {
        vector<int> list;
        istringstream is(s);

        int n;
        while(is >> n) {
            list.push_back(n);
        }

        int leaveOut = 0; // -> list.size() - 1...
        for(int i = 0; i < list.size(); i++) {
            int localSum = 0;
            for(int ii = 0; ii < list.size(); ii++) {
                if(ii == leaveOut)
                    continue;
                localSum += list[ii];
            }

            // Sum of all numbers except one left out...
            for(int iii = 0; iii < list.size(); iii++) {
                if(localSum == list[iii]) {
                    cout << localSum << endl;
                    goto out;
                }
            }
            leaveOut++;
        }
        out:;
    }
    

    return 0;
}
