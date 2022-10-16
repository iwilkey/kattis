#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int s; cin >> s;
    vector<int> list(s, 0);
    for(int i = 0; i < s; i++)
        cin >> list[i];
    sort(list.begin(), list.end());
    reverse(list.begin(), list.end());
    int a = 0, b = 0;
    bool alice = true;
    while(list.size() != 0) {
        if(alice) a += list[0];
        else b += list[0];
        list.erase(list.begin());
        alice = !alice;
    }
    cout << a << " " << b << endl;
}
