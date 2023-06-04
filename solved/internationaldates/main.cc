#include <iostream>
using namespace std;

#define MONTHS 12

int main(int argc, char ** argv) {
    string line;
    cin >> line;
    int p1 = stoi(line.substr(0, 2));
    int p2 = stoi(line.substr(3, 2));
    if(p1 > 12) cout << "EU" << endl;
    else if(p2 <= MONTHS) cout << "either" << endl;
    else cout << "US" << endl;
    return 0;
}
