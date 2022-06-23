#include <iostream>
#include <unordered_map>
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

string numberToWord(unordered_map<int, string> & decimals, unordered_map<int, string> & tens, int num) {
    if(decimals.find(num) != decimals.end())
        return decimals[num]; // it's 0 - 19
    else {
        // it's 20 - 99...
        string ret,
            look = to_string(num);
        ret += tens[look[0] - '0'];
        if(decimals[look[1] - '0'] != "zero")
            ret += "-" + decimals[look[1] - '0'];
        return ret;
    }
}

string cap(string word) {
    word[0] += 'A' - 'a';
    return word;
}

int main(void) {

    unordered_map<int, string> decimals;
    decimals[0] = "zero";
    decimals[1] = "one";
    decimals[2] = "two";
    decimals[3] = "three";
    decimals[4] = "four";
    decimals[5] = "five";
    decimals[6] = "six";
    decimals[7] = "seven";
    decimals[8] = "eight";
    decimals[9] = "nine";
    decimals[10] = "ten";
    decimals[11] = "eleven";
    decimals[12] = "twelve";
    decimals[13] = "thirteen";
    decimals[14] = "fourteen";
    decimals[15] = "fifteen";
    decimals[16] = "sixteen";
    decimals[17] = "seventeen";
    decimals[18] = "eighteen";
    decimals[19] = "nineteen";
    unordered_map<int, string> tens;
    tens[2] = "twenty";
    tens[3] = "thirty";
    tens[4] = "forty";
    tens[5] = "fifty";
    tens[6] = "sixty";
    tens[7] = "seventy";
    tens[8] = "eighty";
    tens[9] = "ninety";

    while(!cin.eof()) {
        static string line;
        getline(cin, line);
        vector<string> tokens = split(line);
        bool start = true;
        for(string t : tokens) {
            try {
                int n = stoi(t);
                string word = numberToWord(decimals, tens, n);
                cout << ((start) ? cap(word) : word) << " ";
            } catch(exception e) {
                cout << t << " ";
            }
            start = false;
        }
        cout << endl;
    }

    return 0;
}
