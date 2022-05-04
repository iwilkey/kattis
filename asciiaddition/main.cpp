#include <iostream>
#include <vector>
using namespace std;

const string key[11] = {
    "xxxxxx...xx...xx...xx...xx...xxxxxx", // 0
    "....x....x....x....x....x....x....x", // 1
    "xxxxx....x....xxxxxxx....x....xxxxx", // 2
    "xxxxx....x....xxxxxx....x....xxxxxx", // 3
    "x...xx...xx...xxxxxx....x....x....x", // 4
    "xxxxxx....x....xxxxx....x....xxxxxx", // 5
    "xxxxxx....x....xxxxxx...xx...xxxxxx", // 6
    "xxxxx....x....x....x....x....x....x", // 7
    "xxxxxx...xx...xxxxxxx...xx...xxxxxx", // 8
    "xxxxxx...xx...xxxxxx....x....xxxxxx", // 9
    ".......x....x..xxxxx..x....x......." // +
};

char returnSym(string in) {
    int ind = 0;
    for(string k : key) {
        if(in == k)
            if(ind == 10) return '+';
            else return ind + '0';
        ind++;
    }
    return '~';
}

void placeDigit(vector<string> & screen, int dig, int pos) {
    for(int y = 0; y < 7; y++) {
        for(int x = 0; x < 5; x++) {
            screen[y][x + (6 * pos)] = key[dig][x + 5 * y];
        }
    } 
    return;
}

int main(void) {
    vector<string> screen;
    for(int i = 0; i < 7; i++) {
        static string line;
        getline(cin, line);
        screen.push_back(line);
    }
    int segs = screen[0].size() / 6;
    string a, b;
    bool aa = true;
    for(int i = 0; i <= segs; i++) {
        string builder;
        for(int y = 0; y < 7; y++) 
            for(int x = 0; x < 5; x++)
                builder.push_back(screen[y][x + (6 * i)]);
        char sym = returnSym(builder);
        if(sym == '+') {
            aa = false;
            continue;
        }
        if(aa) a.push_back(sym);
        else b.push_back(sym);   
    }
    string ans = to_string((int)(stoi(a) + stoi(b)));
    screen.clear();
    for(int y = 0; y < 7; y++) {
        string builder;
        for(int x = 0; x < (6 * ans.size()) - 1; x++)
            builder.push_back('.');
        screen.push_back(builder);
    }
    int cc = 0;
    for(char c : ans) {
        placeDigit(screen, c - '0', cc);
        cc++;
    }
    for(int y = 0; y < 7; y++)
        cout << screen[y] << endl;
    return 0;
}
