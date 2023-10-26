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

void solve(void) {
    
    double c, l, m;
    cin >> c >> l >> m;

    int max = 0;
    for(int i = 0; i < 6; i++) {
        static double mph, mpg;
        cin >> mph >> mpg; 
        double gal = (m / mpg);
        gal += (m / mph) * l;
        if((c / 2.0f) - gal > 0) max = mph;
        else break;
    }

    cout << ((max != 0) ? "YES " : "NO");
    if(max != 0) cout << max;
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
    initIO(6);
    solve();
    return 0;
}
