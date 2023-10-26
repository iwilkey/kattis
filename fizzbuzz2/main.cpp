#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string in) {
    vector<string> ret;
    string imme;
    stringstream inn(in);
    while(getline(inn, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {
    int c, n; cin >> c >> n;
    vector<string> correct;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0) correct.push_back("fizzbuzz");
        else if(i % 3 == 0) correct.push_back("fizz");
        else if(i % 5 == 0) correct.push_back("buzz");
        else correct.push_back(to_string(i));
    }  
    cin.ignore();
    // For each candadate...
    int highest = -1, holder = -1;
    for(int i = 0; i < c; i++) {
        static string line;
        getline(cin, line);
        int right = 0;
        vector<string> tokens = split(line);
        for(int j = 0; j < tokens.size(); j++) 
            if(tokens[j] == correct[j])
                right++;
        if(right > highest) {
            highest = right;
            holder = i + 1;
        }
    }
    cout << holder << endl;
    return 0;
}
