#include <iostream>
#include <vector>
using namespace std;

int factors(int n) {
    int ff = 0, f = 2;
    while(f * f <= n) 
        if(n % f == 0) {
            n /= f;
            ff++;
        } else f++;
    return ff + 1;
}

int main(void) {
    int num; 
    cin >> num;
    cout << factors(num) << endl;
    return 0;
}
