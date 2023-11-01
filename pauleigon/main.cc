#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N, P, Q;
    cin >> N >> P >> Q;
    int total_rounds = P + Q;
    string turn = (total_rounds / (N * 2)) % 2 != 0 ? "paul" : "opponent";
    cout << turn << endl;
    return 0;
}
