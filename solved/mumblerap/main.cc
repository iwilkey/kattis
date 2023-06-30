#include <iostream>
using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    int max = 0;
    string num_builder = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9')
            num_builder += s[i];
        else {
            if(num_builder != "")  {
                int num = stoi(num_builder);
                if(num > max)
                    max = num;
                num_builder = "";
            }
        }
        if(i == s.size() - 1 && num_builder != "") {
            int num = stoi(num_builder);
            if(num > max)
                max = num;
        }
    }
    cout << max << endl;
    return 0;
}
