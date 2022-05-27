#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int c; cin >> c;
    int max = 0;
    vector<int> print;
    for(int i = 0; i < c; i++) {
        static int in; cin >> in;
        if(in > max) {
            max = in;
            print.push_back(in);
        }
    }
    cout << print.size() << endl;
    for(int i : print) cout << i << " ";
    cout << endl;
    return 0;
}
