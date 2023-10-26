#include <iostream>
using namespace std;

string getStraight(string dir) {
    if(dir == "North") return "South";
    if(dir == "South") return "North";
    if(dir == "East") return "West";
    else return "East";
}

string getLeft(string dir) {
    if(dir == "North") return "East";
    if(dir == "South") return "West";
    if(dir == "East") return "South";
    else return "North";
}

string getRight(string dir) {
    if(dir == "North") return "West";
    if(dir == "South") return "East";
    if(dir == "East") return "North";
    else return "South";
}

int main(void) {
    string a, b, c;
    cin >> a >> b >> c;
    bool passStraight = (getStraight(a) == b);
    bool turnLeft = (getLeft(a) == b);
    // Case 1
    if(passStraight && (getRight(a) == c)) {
        cout << "Yes" << endl;
        return 0;
    }
    // Case 2
    if(turnLeft && ((getStraight(a) == c) || (getRight(a) == c))) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
