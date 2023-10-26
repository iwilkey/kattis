#include <iostream>
#include <algorithm>
using namespace std;

bool test(string & num) {
    reverse(num.begin(), num.end());
    for(int i = 1; i < num.size(); i += 2) {
        int dig = ((int)(num[i] - '0')) * 2;
        if(dig >= 10) {
            string n = to_string(dig);
            dig = ((int)(n[0] - '0') + (int)(n[1] - '0'));
        }
        num[i] = dig + '0';
    }
    int csum = 0;
    for(char c : num) 
        csum += ((int)(c - '0'));
    return csum % 10 == 0;
}

int main(void) {

    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        static string num;
        cin >> num;
        cout << ((test(num)) ? "PASS" : "FAIL") << endl;
    }

    return 0;
}
