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

void cut(vector<string> & queue, string cutter, string cutted) {
    int after = -1;
    for(int i = 0; i < queue.size(); i++)
        if(queue[i] == cutted) {
            after = i;
            break;
        }
    queue.insert(queue.begin() + after, cutter);
    return;
}

void leave(vector<string> & queue, string leaver) {
    for(int i = 0; i < queue.size(); i++) 
        if(queue[i] == leaver) {
            queue.erase(queue.begin() + i);
            return;
        }
    return;
}

int main(void) {


    int size; cin >> size;
    vector<string> queue;
    for(int i = 0; i < size; i++) {
        static string in; cin >> in;
        queue.push_back(in);
    }

    int inst; cin >> inst;
    cin.ignore();
    for(int i = 0; i < inst; i++) {
        static string line;
        getline(cin, line);
        vector<string> tokens = split(line);
        if(tokens[0] == "leave") leave(queue, tokens[1]);
        else if(tokens[0] == "cut") cut(queue, tokens[1], tokens[2]);
    }

    for(string s : queue) 
        cout << s << endl;
        
    return 0;
}