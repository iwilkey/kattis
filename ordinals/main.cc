/**
* Solving: https://open.kattis.com/problems/ordinals
* @author Ian Wilkey (iwilkey)
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string vonNewmann(int n) {
    if(n == 0) 
        return "{}";
    string res = "{";
    for(int i = 0; i < n; i++) {
        if(i > 0) 
            res += ",";
        res += vonNewmann(i);
    }
    res += "}";
    return res;
}

int main(void) {
    int n;
    cin >> n;
    cout << vonNewmann(n) << endl;
    return 0;
}
