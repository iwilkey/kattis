#include <iostream>
using namespace std;

int main(void) {
    string line;
    getline(cin, line);
    int i = 0;
    while(true) {
        if(i == line.size()) break;
        if(line[i + 1] == line[i]) {
            line.erase(i, 1);
            i--;
        }
        i++;
    }
    cout << line << endl;
    return 0;
}
