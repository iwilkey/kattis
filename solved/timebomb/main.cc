#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    const string numRep[10][5] = {
        { "***", "* *", "* *", "* *", "***" },
        { "  *", "  *", "  *", "  *", "  *" },
        { "***", "  *", "***", "*  ", "***" },
        { "***", "  *", "***", "  *", "***" },
        { "* *", "* *", "***", "  *", "  *" },
        { "***", "*  ", "***", "  *", "***" },
        { "***", "*  ", "***", "* *", "***" },
        { "***", "  *", "  *", "  *", "  *" },
        { "***", "* *", "***", "* *", "***" },
        { "***", "* *", "***", "  *", "***" }
    };
    vector<string> render;
    for(int i = 0; i < 5; i++) {
        static string line;
        getline(cin, line);
        render.push_back(line);
    }
    string builder = "";
    int i = 0;
    while(true) {
        if(i >= render[0].size()) break;
        string read[5] = { "" };
        for(int jj = 0; jj < 5; jj++)
            read[jj] = render[jj].substr(i, 3);
        for(int k = 0; k < 10; k++) {
            for(int kk = 0; kk < 5; kk++) 
                if(read[kk] != numRep[k][kk]) 
                    goto next;
            builder.push_back(k + '0');
            next:;
        }
        i += 4;
    }
    if(stoi(builder) % 6 == 0) cout << "BEER!!" << endl;
    else cout << "BOOM!!" << endl;
    return 0;
}
