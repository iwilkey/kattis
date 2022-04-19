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

uint8_t verdict(char h, char o) {
    if(h == o) return 1;
    switch(h) {
        case 'R':
            if(o == 'S') return 2;
            return 0;
        case 'P':
            if(o == 'R') return 2;
            return 0;
        case 'S':
            if(o == 'P') return 2;
            return 0;
    }
    return -1;
}

void solve(void) {

    int r, f; cin >> r;
    cin.ignore();
    string h; getline(cin, h);
    cin >> f;
    cin.ignore();
    vector<string> rounds;
    for(int i = 0; i < f; i++) {
        static string in;
        getline(cin, in);
        rounds.push_back(in);
    }
    
    
    int points = 0;
    for(int ff = 0; ff < f; ff++) 
        for(int rr = 0; rr < r; rr++)
            points += verdict(h[rr], rounds[ff][rr]);

    const char check[3] = { 'R', 'P', 'S' };
    int maxScore = 0, winning = 0;
    for(int rr = 0; rr < r; rr++) {
        for(int i = 0; i < 3; i++) {
            int score = 0;
            for(int ff = 0; ff < f; ff++) 
                score += verdict(check[i], rounds[ff][rr]);
            if(score > maxScore) maxScore = score;
        }    
        winning += maxScore;
        maxScore = 0;
    }

    cout << points << endl << winning << endl;

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
