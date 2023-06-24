#include <iostream>
using namespace std;

int main(void) {
    string name;
    string cap;
    cin >> name >> cap;
    if(name.size() >= stod(cap)) cout << cap << endl;
    else cout << name.size() << endl;
    return 0;
}
