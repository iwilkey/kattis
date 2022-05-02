// @author Ian Wilkey (iwilkey)

#include <iostream>
#include <string>
#include <bitset>
#include <unordered_map>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

#define _USE_MATH_DEFINES

template <typename T> 
void log(string tag, T obj) { 
    cout << tag << ": " << obj << endl; 
}

void solve(void) {
    
    unordered_map<string, int> ballot;
    while(!cin.eof()) {
        static string in;
        getline(cin, in);
        if(in == "***") break;
        ballot[in] += 1;
    }

    int max = 0;
    vector<string> mo;
    for(auto entry : ballot) {
        if(entry.second > max) {
            mo.clear();
            max = entry.second;
            mo.push_back(entry.first);
        } else if(entry.second == max) 
            mo.push_back(entry.first);
    }
    if(mo.size() == 1) cout << mo[0] << endl;
    else cout << "Runoff!" << endl;
    
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
    initIO(1);
    solve();
    return 0;
}
