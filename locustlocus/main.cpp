#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

long long gcd(long long int a, long long int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(void) {
    
    int c; cin >> c;
    unordered_map<int, int> log;
    for(int i = 0; i < c; i++) {
        static int year, p1, p2;
        cin >> year >> p1 >> p2;
        log[year] = gcd(p1, p2);
    }
    pair<int, int> min = make_pair(0, INT_MAX);
    for(const auto entry : log) {
        if(entry.second < min.second && entry.second != 1) {
            min.second = entry.second;
            min.first = entry.first;
        }
    }
    cout << min.first + min.second << endl;

    return 0;
}