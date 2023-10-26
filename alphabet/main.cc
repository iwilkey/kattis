#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    std::string target = "abcdefghijklmnopqrstuvwxyz";
    std::string input;
    std::cin >> input;
    const int ALPHABET_SIZE = 26;
    target = " " + target;
    input = " " + input;
    std::vector<std::vector<int> > dp(input.size(), std::vector<int>(ALPHABET_SIZE + 1, 0));
    for (int i = 1; i < input.size(); ++i) {
        for (int j = 1; j <= ALPHABET_SIZE; ++j) {
            if (input[i] == target[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    int lcsLength = dp[input.size() - 1][ALPHABET_SIZE];
    std::cout << (ALPHABET_SIZE - lcsLength) << std::endl;
    return 0;
}
