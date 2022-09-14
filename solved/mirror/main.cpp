#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int c; cin >> c;
    vector<string> image;
    for(int i = 0; i < c; i++) {
        image.clear();
        int w, h; cin >> h >> w;
        cin.ignore();
        for(int y = 0; y < h; y++) {
            static string line;
            getline(cin, line);
            image.push_back(line);
        }
        cout << "Test " << (i + 1) << endl;
        for(int y = 0; y < h; y++) {
            for(int x = 0; x < w; x++)
                cout << image[h - y - 1][w - x - 1];
            cout << endl;
        }
    }
    return 0;
}
