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

bool isPrime(int num) {
    for(int i = 2; i <= num / 2; i++)
        if(num % i == 0)
            return false;
    return true;
}

void solve(void) {

    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        static long long int n, e, pp, qq; 
        cin >> n >> e;
        for(int p = 2; p < 1000; p++) {
            if(!isPrime(p)) continue;
            for(int q = p + 1; q < 1000; q++) {
                if(!isPrime(q)) continue;
                if(p * q == n) {
                    pp = p; 
                    qq = q;
                    goto end;
                }
            }
        }
        end:;
        long long int d = 2;
        while(true) {
            long long int check = ((d * e) - 1) % ((pp - 1) * (qq - 1));
            if(check == 0) break;
            d++;
        }
        cout << d << endl;
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
