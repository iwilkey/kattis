#include <iostream>
using namespace std;

int main(void) {
    int x, y, r;
    cin >> x >> y >> r;
    int dx[4] = { -1, 1, 1, -1 };
    int dy[4] = { 1, 1, -1, -1 };
    for(int i = 0; i < 4; i++) {
        int px = x + (dx[i] * r);
        int py = y + (dy[i] * r);
        cout << px << " " << py << endl;
    }
    return 0;
}
