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

///////////////////////////
/// COMBINATIONS
///////////////////////////

void npickrcombRecr(vector<int>, int, int, vector<int>, int, 
    vector<vector<int>> &);

vector<vector<int>> npickrcomb(vector<int> arr, int r) {
    vector<vector<int>> ret;
    vector<int> data(r, 0);
    npickrcombRecr(arr, r, 0, data, 0, ret);
    return ret;
}

void npickrcombRecr(vector<int> arr, int r, int index, 
    vector<int> data, int i, vector<vector<int>> & combinations) {
    if(index == r) {
        combinations.push_back(data);
        return;
    }
    if(i >= arr.size()) return;
    data[index] = arr[i];
    npickrcombRecr(arr, r, index + 1, data, i + 1, combinations);
    npickrcombRecr(arr, r, index, data, i + 1, combinations);
}

///////////////////////////
/// SOLUTION
///////////////////////////

void solve(void) {

    int c; cin >> c;
    vector<long long int> SIN;
    for(int i = 0; i < c; i++) {
        static long long int in;
        cin >> in;
        SIN.push_back(in);
    }

    int m = 1;
    while(true) {
        vector<long long int> reduced;
        for(int sin : SIN) {
            int proposed = sin % m;
            for(int i = 0; i < reduced.size(); i++) 
                if(reduced[i] == proposed) 
                    goto next;
            reduced.push_back(proposed);
        }
        break;
        next:;
        m++;
    }
 
    cout << m << endl;

    return;
}

///////////////////////////
/// MAIN
///////////////////////////

void initIO(int decPrecision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(decPrecision);
    return;
}

int main(int argc, char ** args) {
    initIO(0);
    solve();
    return 0;
}
