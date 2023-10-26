#include <iostream>
using namespace std;

int main(void) {
    // Think Of It This Way, Ep. 1
    int l; cin >> l;
    string lec;
    cin >> lec;
    int coff = 0, awake = 0;
    for(int i = 0; i < lec.size(); i++) {
        if(lec[i] == '1') coff = 3;
        if(coff > 0) awake++;
        coff--;
    }
    cout << awake << endl;
    return 0;
}
