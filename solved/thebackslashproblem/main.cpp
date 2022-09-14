#include <iostream>
using namespace std;

inline bool spec(char & c) {
    return ((c >= '!' && c <= '*') || (c >= '[' && c <= ']'));
}

int main(void) {
    while(!cin.eof()) {
        static int iterations;
        cin >> iterations;
        cin.ignore();
        string in;
        getline(cin, in);
        for(int i = 0; i < iterations; i++) {
            string iter = "";
            for(int c = 0; c < in.size(); c++) {
                if(spec(in[c])) {
                    iter.push_back('\\');
                    iter.push_back(in[c]);
                    continue;
                }
                iter.push_back(in[c]);
            }
            in = iter;
        }
        cout << in << endl;
    }
    return 0;
}
