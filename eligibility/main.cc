#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        static string name,
            dfts, dob;
        long long int courses;
        cin >> name >> dfts >> dob >> courses;
        int ysc = stoi(dfts.substr(0, 4)),
            yob = stoi(dob.substr(0, 4));
        if(ysc >= 2010 || yob >= 1991) {
            cout << name << " eligible" << endl;
            continue;
        }
        if(ceil((float)courses / 5.0f) > 8) {
            cout << name << " ineligible" << endl;
            continue;
        }
        cout << name << " coach petitions" << endl;
    }
    return 0;
}
