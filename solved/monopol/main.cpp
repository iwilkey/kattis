#include <iostream>
using namespace std;

#define ui unsigned int

// Create a look-up table of the chances of rolling a given number. O(1).
float chance_of(int n) {
    if(n == 2 || n == 12) return 1.0f / 36.0f;
    else if(n == 3 || n == 11) return 2.0f / 36.0f;
    else if(n == 4 || n == 10) return 3.0f / 36.0f;
    else if(n == 5 || n == 9) return 4.0f / 36.0f;
    else if(n == 6 || n == 8) return 5.0f / 36.0f;
    else if(n == 7) return 6.0f / 36.0f;
    else return 0.0f;
}

int main(void) {
    int n;
    cin >> n;
    float chance = 0.0f;
    for(ui i = 0; i < n; i++) {
        int a;
        cin >> a;
        chance += chance_of(a);
    }
    cout << chance << endl;
    return 0;
}
