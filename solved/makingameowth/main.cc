#include <iostream>
using namespace std;

int main(void) {
    long long int n, p, x, y;
    cin >> n >> p >> x >> y;
    long long int page = 1, time = 0,
        read = 0;
    while(true) {
        if(!(page % n))
            time += y;
        else {
            if(read >= p) break;
            time += x;
            read++;
        }
        page++;
    }
    cout << time << endl;
    return 0;
}
