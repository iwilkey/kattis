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

    int n, z; cin >> n >> z;
    vector<int> list;
    for(int i = 0; i < n; i++) {
        static int in; cin >> in;
        list.push_back(in);
    }
    
    for(int i = 1; i <= n; i++)
        if(i % z == 0) 
            cout << list[i - 1] << " ";
    
    cout << endl;

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
