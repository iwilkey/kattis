#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    unsigned d;
    cin >> d;
    vector<int> temps(d, -1);
    for(int i = 0; i < d; i++) 
        cin >> temps[i];
    int min = 41;
    unsigned day = -1;
    for(int i = 1; i < d - 1; i++) {
        int m = max(temps[i - 1], temps[i + 1]);
        if(m < min) {
            min = m;
            day = i;
        }
    }
    cout << day << " " << min << endl;
    return 0;
}
