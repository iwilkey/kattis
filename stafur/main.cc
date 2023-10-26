#include <iostream>
using namespace std;

int main(void) {
    char c;
    cin >> c;
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') cout << "Jebb" << endl;
    else if(c == 'Y') cout << "Kannski" << endl;
    else cout << "Neibb" << endl;
    return 0;
}
