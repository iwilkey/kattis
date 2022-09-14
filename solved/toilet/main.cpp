#include <iostream>
using namespace std;

int main(void) {

    string line;
    getline(cin, line);
    const char n[3] = { 'U', 'D', '?' };
    for(int i = 0; i < 3; i++) {
        char last = line[0], next = n[i];
        int swaps = 0;
        for(int c = 1; c < line.size(); c++) {
            if(i != 2) {
                if(last != line[c]) swaps++;
                if(line[c] != next) swaps++;
                last = next;
            } else {
                if(last != line[c]) swaps++;
                last = line[c];
            }
        }
        cout << swaps << endl;
    }

    return 0;
}