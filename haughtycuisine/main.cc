#include <iostream>
using namespace std;

int main(void) {
    int m; cin >> m;
    int item;
    cin >> item;
    cout << item << endl;
    for(int j = 0; j < item; j++) {
        static string in;
        cin >> in;
        cout << in << endl;
    }
    return 0;
}
