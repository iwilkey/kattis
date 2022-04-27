#include <iostream>
using namespace std;

int main(void) {

    int max, groups;
    cin >> max >> groups;
    cin.ignore();
    int cant = 0, ppl = 0;
    for(int i = 0; i < groups; i++) {
        static string line;
        getline(cin, line);
        string command;
        int num;
        for(int c = 0; c < line.size(); c++) {
            if(line[c] == ' ') {
                command = line.substr(0, c);
                num = stoi(line.substr(c + 1, line.size() - c));
                break;
            }
        }

        if(command == "enter") {
            if(ppl + num > max)
                cant++;
            else ppl += num;
        } else ppl -= num;
    }

    cout << cant << endl;

    return 0;
}