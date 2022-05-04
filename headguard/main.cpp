#include <iostream>
using namespace std;

int main(void) {
    while(!cin.eof()) {
        static string line;
        getline(cin, line);
        
        for(int c = 0; c < line.size(); c++) {
            int stretch = 1;
            char lookAt = line[c];
            while(true) {
                if(stretch + c >= line.size()) {
                    cout << stretch << lookAt;
                    goto next;
                }
                if(line[stretch + c] != lookAt) {
                    cout << stretch << lookAt;
                    c += stretch - 1;
                    break;
                }
                stretch++;
            }
        }
        next:;
        cout << endl;
    }
    return 0;
}
