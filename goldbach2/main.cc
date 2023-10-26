#include <iostream>
#include <vector>
using namespace std;

bool ip(int n) {
    if(n == 0 || n == 1) return false;
    for(int i = 2; i <= n / 2; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> cases;
    int max = 0;
    for(int i = 0; i < n; i++) {
        static int in;
        cin >> in;
        cases.push_back(in);
        if(in > max) 
            max = in;
    }
    vector<int> ap;
    for(int j = 2; j <= max - 2; j++)
        if(ip(j))
            ap.push_back(j);
    for(int i = 0; i < n; i++) {
        vector< pair<int, int> > rep;
        for(int j = 0; j < ap.size(); j++) {
            if(ap[j] > cases[i]) break;
            for(int k = j; k < ap.size(); k++) {
                if(ap[k] > cases[i]) break;
                if(ap[j] + ap[k] == cases[i])
                    rep.push_back(make_pair(ap[j], ap[k]));
            }
        }
        cout << cases[i] << " has " 
            << rep.size() << " representation(s)" << endl;
        for(auto o : rep)
            cout << o.first << "+" << o.second << endl;
        cout << endl;
    }

    return 0;
}
