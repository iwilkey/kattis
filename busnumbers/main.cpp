#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

    int b; cin >> b;
    vector<int> buses;
    for(int i = 0; i < b; i++) {
        static int in;
        cin >> in;
        buses.push_back(in);
    }

    sort(buses.begin(), buses.end());

    for(int i = 1; i < buses.size() - 1; i++) {

    }

    return 0;
}
