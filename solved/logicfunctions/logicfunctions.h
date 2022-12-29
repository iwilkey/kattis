#include <iostream>

void exclusive(bool x, bool y, bool& ans);
void implies(bool x, bool y, bool& ans);
void equivalence(bool x, bool y, bool& ans);

using namespace std;

void checkAns(bool val, bool expected) {
    if (val != expected) {
        cout << "FAIL - expected " << expected << endl;
        exit(1);
    }
}

int main() {
    bool ans;
    exclusive(true, true, ans);
    cout << "T xor T: " << ans << endl;
    checkAns(ans, false);

    implies(true, true, ans);
    cout << "T => T: " << ans << endl;
    checkAns(ans, true);

    equivalence(true, true, ans);
    cout << "T <=> T: " << ans << endl;
    checkAns(ans, true);

    cout << "OK!" << endl;
}
