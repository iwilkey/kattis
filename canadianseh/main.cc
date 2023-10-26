#include <iostream>
using namespace std;

int main(void) {
    string in;
    getline(cin, in);
    if(in.substr(in.size() - 3, in.size()) == "eh?")
        cout << "Canadian!" << endl;
    else cout << "Imposter!" << endl;
    return 0;
}
