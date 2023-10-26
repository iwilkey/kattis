#include <iostream>
using namespace std;

int main(void) {
    int b, k, s, ks; 
    cin >> b >> k >> s;
    b--;
    ks = (int)((float)k / s);
    float days = ((float)b / ks);
    if(days != (int)days) days = (int)days + 1;
    cout << days << endl;
    return 0;
}
