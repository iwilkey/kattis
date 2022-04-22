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

void solve(void) {

    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        static int s; cin >> s;
        vector<int> list;
        for(int ii = 0; ii < s; ii++) {
            static int in; cin >> in;
            list.push_back(in);
        }
        int lookfor = list[0] + 1;
        list[0] = -1;
        for(int i = 0; i < s; i++) {
            if(list[i] == lookfor) {
                lookfor++;
                list[i] = -1;
            }
        }
        for(int i = 0; i < s; i++)
            if(list[i] != -1) {
                cout << i + 1 << endl;
                break;
            }
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
