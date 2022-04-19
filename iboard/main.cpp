// @author Ian Wilkey (iwilkey)

#include <iostream>
#include <string>
#include <bitset>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

template <typename T> 
void log(string tag, T obj) { 
    cout << tag << ": " << obj << endl; 
}

void bin(vector<int> & rep, unsigned n)
{
    if(n > 1) 
        bin(rep, n / 2);
    rep.push_back(n % 2);
    return;
}


void solve(void) {

    while(!cin.eof()) {
        string line;
        getline(cin, line);
        int counts[2] = { 0, 0 };
        for(char c : line) {
            vector<int> rep;
            bin(rep, (int)c);
            if(rep.size() < 7) 
                rep.insert(rep.begin(), 0);
            for(int i = 0; i < rep.size(); i++) {
                if(rep[i] == 1) counts[1]++;
                else counts[0]++;
            }
        }
        if(counts[0] % 2 || counts[1] % 2) cout << "trapped" << endl;
        else cout << "free" << endl;
    }
    return;
}

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

int main(int argc, char ** args) {
    initIO(10);
    solve();
    return 0;
}
