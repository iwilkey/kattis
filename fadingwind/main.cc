#include <iostream>
using namespace std;

int main(void) {
    int h, k, v, s;
    cin >> h >> k >> v >> s;
    long long int dist = 0;
    while(h > 0) {
        v += s;
        v -= max(1, (int)(v / 10.0f));
        if(v >= k) h++;
        if(v > 0 && v < k) h--;
        if(h == 0) v = 0;
        if(v <= 0) {
            h = 0;
            v = 0;
        }
        dist += v;
        if(s > 0) s--;
    }
    cout << dist << endl;
    return 0;
}
