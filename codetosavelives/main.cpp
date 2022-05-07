#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string in) {
    vector<string> ret;
    string imme;
    stringstream check(in);
    while(getline(check, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {

    int c; cin >> c;
    cin.ignore();
    for(int i = 0; i < c; i++) {
        int nums[2] = { -1 };
        for(int ii = 0; ii < 2; ii++) {
            static string line;
            getline(cin, line);
            vector<string> out = split(line);
            string num;
            for(string s : out) 
                num.push_back(s[0]);
            nums[ii] = stoi(num);
        }
        string ans = to_string(nums[0] + nums[1]);
        for(char c : ans) 
            cout << c << " ";
        cout << endl;
    }
    return 0;
}