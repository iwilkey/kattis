#include <iostream>
#include <unordered_map>
using namespace std;

const string CONST = "bcdfhjklmnpqrstvwxzy",
    VOW = "aeiou";

string validPattern(int size) {
    while(true) {
        string pat;
        for(int i = 0; i < size; i++)
            pat.push_back((rand() % 2 == 0) ? 'v' : 'c');
        char l = pat[0]; int sr = 1;
        for(int i = 1; i < size; i++) {
            if(pat[i] == l) {
                sr++;
                if(sr >= 3) 
                    goto cont;
            } else {
                sr = 1;
                l = pat[i];
            }
        }
        return pat;
        cont:;
    }
}

void generateName(unordered_map<string, string> & map, int & gen) {
    // Generate a valid pattern...
    string pat = validPattern(rand() % 17 + 3);
    // Now, fill in letters with something and check if it exists.
    while(true) {
        string val;
        for(char c : pat)
            if(c == 'c') val.push_back(CONST[rand() % CONST.size()]);
            else val.push_back(VOW[rand() % VOW.size()]);
        if(map[val] == "") {
            map[val] = "check";
            cout << val << endl;
            break;
        }
    }
    gen++;
}

int main(void) {
    srand((unsigned)time(0));
    int n, gen = 0; cin >> n;
    unordered_map<string, string> map;
    while(gen < n)
        generateName(map, gen);
    return 0;
}
