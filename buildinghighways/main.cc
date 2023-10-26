#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    long long n;
    cin >> n;
    vector<long long> x(n);
    for(long long i = 0; i < n; i++) 
        cin >> x[i];
    sort(x.begin(), x.end());
    long long sum = 0;
    for(long long i = 1; i < n; i++)
        sum += (x[0] + x[i]);
    cout << sum << endl;
    return 0;
}
