#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(void) {

    int s; cin >> s;
    vector<int> queue;
    for(int i = 0; i < s; i++) {
        static int in;
        cin >> in;
        if(in != 0)
            queue.push_back(in);
    }

    int max = -INT_MAX;
    for(int i = 0; i < s; i++) {
        vector<int> temp = queue;
        temp.insert(temp.begin() + i, 0);
        long long int local = 0;
        for(int ii = 1; ii <= s; ii++)
            local += (ii * temp[ii - 1]);
        if(local > max) max = local;
    }
    cout << max << endl;

    return 0;
}
