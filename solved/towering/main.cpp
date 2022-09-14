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

    int nums[6] = { 0 };
    for(int i = 0; i < 6; i++)
        cin >> nums[i];
    int targets[2] = { 0 };
    for(int i = 0; i < 2; i++) 
        cin >> targets[i];
    bool lowFirst = targets[0] < targets[1];
    sort(targets, targets + 2);

    string bitmask(3, 1);
    bitmask.resize(6, 0);

    int al[3], ah[3]; // INDEXES, not values.

    do {

        int ii = 0, ti[3] = { -1, -1, -1 };
        for(int i = 0; i < 6; i++) {
            if(bitmask[i]) {
                ti[ii] = i;
                ii++;
            }
        }

        if(nums[ti[0]] + nums[ti[1]] + nums[ti[2]] == targets[0]) {
            // Found answer...
            for(int i = 0; i < 3; i++)
                al[i] = ti[i]; 
            break;
        }

    } while(prev_permutation(bitmask.begin(), bitmask.end()));

    int f = 0;
    for(int i = 0; i < 6; i++) {
        for(int ii = 0; ii < 3; ii++) 
            if(al[ii] == i) 
                goto cont;
        ah[f] = i;
        f++;
        cont:;
    }

    for(int i = 0; i < 3; i++) {
        al[i] = nums[al[i]];
        ah[i] = nums[ah[i]];
    }

    sort(al, al + 3);
    reverse(al, al + 3);
    sort(ah, ah + 3);
    reverse(ah, ah + 3);

    if(lowFirst) {
        for(int ii = 0; ii < 3; ii++) cout << al[ii] << " ";
        for(int ii = 0; ii < 3; ii++) cout << ah[ii] << " ";
        cout << endl;
    } else {
        for(int ii = 0; ii < 3; ii++) cout << ah[ii] << " ";
        for(int ii = 0; ii < 3; ii++) cout << al[ii] << " ";
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
    initIO(10);
    solve();
    return 0;
}
