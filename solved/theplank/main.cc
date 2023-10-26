#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int dp[n + 1];
    // base cases for dp[i = length of plank]
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    // Continuing, the recurrence relation is dp[i + 1] = (dp[i] + dp[i - 1] + dp[i - 2]).
    for(int i = 3; i <= n; i++) 
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    cout << dp[n] << endl;
    return 0;
}
