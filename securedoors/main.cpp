// @author Ian Wilkey (iwilkey)

#include <iostream>
#include <string>
#include <bitset>
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

bool instruction(vector< pair<string, bool> > & log, string name, string command) {
    bool found = false;
    for(pair<string, bool> & entry : log) {
        if(entry.first == name) {
            if(entry.second && command == "entry" || !entry.second && command == "exit")
                return false;
            entry.second = (command == "entry") ? true : false;
            return true;
        }
    }
    if(command == "exit") 
        return false;
    log.push_back(make_pair(name, true));
    return true;
}

void solve(void) {

    int ins; cin >> ins;
    vector< pair<string, bool> > log;
    for(int i = 0; i < ins; i++) {
        static string ins[2];
        cin >> ins[0] >> ins[1];
        cout << ins[1] << ((ins[0] == "entry") ? " entered" : " exited");
        if(!instruction(log, ins[1], ins[0])) 
            cout << " (ANOMALY)";
        cout << endl;
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
    initIO(1);
    solve();
    return 0;
}
