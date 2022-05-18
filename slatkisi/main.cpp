#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    long long int in; int z, lookAt;
    cin >> in >> z;
    string num = to_string(in);
    lookAt = num[num.size() - z] - '0';
    in = (lookAt >= 5) ? (in - (in % (int)pow(10, z))) + pow(10, z) 
        : in - (in % (int)pow(10, z));
    cout << in << endl;
    return 0;
}
