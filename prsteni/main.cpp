#include <iostream>
using namespace std;

int gcf(int a, int b) {
    while(b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void) {
    int nums; cin >> nums;
    int num = -1;
    for(int i = 0; i < nums; i++) {
        static int in; cin >> in;
        if(i == 0) num = in;
        else {
            int gc = gcf(num, in);
            cout << (num / gc) << "/" << (in / gc) << endl;
        }
    }
    return 0;
}