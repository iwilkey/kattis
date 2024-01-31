#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
    string in; 
    cin >> in;
    int v = 0, vy = 0;
    for(char i : in) {
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
            v++;
            vy++;
        } else if(i == 'y') {
            vy++;
        }
    }
    cout << v << " " << vy << endl;
}