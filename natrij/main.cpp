#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

#define convFac(t) ((t == 0) ? 60 * 60 : ((t == 1) ? 60 : 1))

vector<string> split(string in, char delim) {
    vector<string> ret;
    stringstream s(in);
    string check;
    while(getline(s, check, delim))
        ret.push_back(check);
    return ret;
}

int main(void) {

    string t1, t2;
    cin >> t1 >> t2;

    vector<string> time[2] = { split(t1, ':'), split(t2, ':') };
    int sec[2] = { 0 };
    for(int i = 0; i < 2; i++)
        for(int t = 0; t < 3; t++)
            sec[i] += (stoi(time[i][t]) * convFac(t));

    int secAns = sec[1] - sec[0];
    if(secAns <= 0) secAns = (24 * 60 * 60) - abs(secAns);

    int ans[3] = { 0 };
    for(int t = 0; t < 3; t++) {
        ans[t] = (secAns / convFac(t));
        secAns -= ans[t] * convFac(t);
        if(ans[t] <= 9) cout << '0' << ans[t];
        else cout << ans[t];
        if(t != 2) cout << ':';
        else cout << endl;
    }

    return 0;
}
