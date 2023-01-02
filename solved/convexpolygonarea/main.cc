#include <iostream>
#include <vector>
using namespace std;

struct vertex {
    int x;
    int y;
};

int main(void) {
    int p;
    cin >> p;
    for(int i = 0; i < p; i++) {
        vector<struct vertex> verts;
        int s;
        cin >> s;
        for(int j = 0; j < s; j++) {
            struct vertex vert;
            cin >> vert.x >> vert.y;
            verts.push_back(vert);
        }
        float sum1 = 0;
        float sum2 = 0;
        for(int j = 0; j < s; j++) {
            sum1 += verts[j].x * verts[(j + 1) % s].y;
            sum2 += verts[j].y * verts[(j + 1) % s].x;
        }
        float area = 0.5f * (sum1 - sum2);
        cout << area << endl;
    }
    return 0;
}
