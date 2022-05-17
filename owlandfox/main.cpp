#include <iostream>
using namespace std;

int sum(int n) {
    string nn = to_string(n);
    int s = 0;
    for(char c : nn) 
        s += (int)(c - '0');
    return s;
}

int main(void) {

    int nums; cin >> nums;
    for(int i = 0; i < nums; i++) {
        static int n, sumN, sumNN; cin >> n;
        sumN = sum(n);
        for(int nn = n - 1; nn >= 0; nn--) {
            sumNN = sum(nn);
            if(sumN - sumNN == 1) {
                cout << nn << endl;
                break;
            }
        }
    }

    return 0;
}