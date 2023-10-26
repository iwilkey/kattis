#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    string n1, n2;
    cin >> n1 >> n2;
    int po = 0;
    for(int i = 0; i < n1.size(); i++)
        if(n1[i] != n2[i])
            po++;
    cout << pow(2, po) << endl;
    return 0;
}
