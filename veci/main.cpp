#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    int x; cin >> x;
    string check(to_string(x).size(), '-');
    for(int xx = x + 1; xx < pow(10, (int)log10(x) + 1); xx++) {
        string num = to_string(x), lookAt = to_string(xx);
        for(char & c : num)
            for(char & cc : lookAt)
                if(c == cc) {
                    c = '-';
                    cc = '-';
                }
        if(num == check) {
            cout << xx << endl;
            return 0;
        }
    }
    cout << "0\n";
    return 0;
}
