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

    int p, f; 
    cin >> p >> f;

    vector<int> pop(p, 0);
    for(int ff = 0; ff < f; ff++) {
        static int p1, p2; 
        cin >> p1 >> p2;
        pop[p1 - 1]++;
        pop[p2 - 1]++;
    }

    for(int pp = 0; pp < p; pp++) 
        cout << (pop[pp] - (pp + 1)) << " ";
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
