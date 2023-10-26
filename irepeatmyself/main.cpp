#include <iostream>
using namespace std;

bool test(string pattern, string line) {
    for(int i = 0; i < line.size(); i += pattern.size()) {
        string check = line.substr(i, ((i + pattern.size() >= line.size()) 
            ? line.size() - i : pattern.size()));
        for(int j = 0; j < min(pattern.size(), check.size()); j++)
            if(pattern[j] != check[j]) return false;
    }
    return true;
}

int main(void) {
    int c; cin >> c;
    cin.ignore();
    for(int i = 0; i < c; i++) {
        static string line;
        getline(cin, line);
        int l = 1;
        while(true) {
            if(!test(line.substr(0, l), line)) l++;
            else break;
        }
        cout << l << endl;
    }
    return 0;
}
