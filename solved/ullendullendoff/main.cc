#include <iostream>
#include <vector>
using namespace std;

int main() {
    int f;
    cin >> f;
    vector<string> n(f);
    for(int i = 0; i < f; i++)
        cin >> n[i];
    int position = 13 % f;
    if(position == 0)
        position = f;
    cout << n[position - 1] << endl;
    return 0;
}
