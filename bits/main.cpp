#include <iostream>
#include <bitset>
using namespace std;

int main(void) {
    int c; cin >> c;
    for(int i = 0; i < c; i++) {
        string number; cin >> number;
        int max = 0;
        for(int i = 1; i <= number.size(); i++) {
            string subNum = number.substr(0, i);
            unsigned int num = stoul(subNum);
            bitset<32> bin(num);
            int one = 0;
            for(char c : bin.to_string())
                if(c == '1') 
                    one++;
            if(one > max) 
                max = one;
        }
        cout << max << endl;
    }
    return 0;
}
