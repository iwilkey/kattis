#include <iostream>
#include <vector>
#include <climits>
#include <string>
using namespace std;

struct point_t {
    int x = 0;
    int y = 0;
};

/**
 * Defined rendering grid as follows...
 * ^
 * | +y
 * |
 * |
 * [ - - - > +x
*/
int main(void) {

    vector<point_t> points;
    struct point_t pos;
    points.push_back(pos);
    // Note: these are not points, rather a collection of max and min values for each dimension.
    struct point_t max;
    struct point_t min;
    string dir;
    while(cin >> dir) {
        if(dir == "down") pos.y--;
        else if(dir == "up") pos.y++;
        else if(dir == "right") pos.x++;
        else pos.x--;
        points.push_back(pos);
        // Find min and max for each dimension.
        if(pos.x > max.x) max.x = pos.x;
        else if(pos.x < min.x) min.x = pos.x;
        if(pos.y > max.y) max.y = pos.y;
        else if(pos.y < min.y) min.y = pos.y;
    }

    // Offset points by abs(min) value.
    for(auto & p : points) {
        p.x += abs(min.x) + 1;
        p.y += abs(min.y) + 1;
    }

    // Get (width and height) + 2 (for frame)...
    int width = abs(max.x - min.x) + 1 + 2;
    int height = abs(max.y - min.y) + 1 + 2;

    // Define rendering grid...
    char render[height][width];

    for(int y = height - 1; y >= 0; y--) {
        for(int x = 0; x < width; x++) {
            if(y == 0 || y == height - 1)
                cout << '#';
            else if(x == 0 || x == width - 1)
                cout << '#';
            else {
                for(int i = 0; i < points.size(); i++) {
                    struct point_t p = points[i];
                    if(p.x == x && p.y == y) {
                        if(i == 0) {
                            cout << 'S';
                            goto next;
                        } else if(i == points.size() - 1) {
                            cout << 'E';
                            goto next;
                        } else {
                            cout << '*';
                            goto next;
                        }
                    }
                }
                cout << ' ';
            }
            next:;
        }
        cout << endl;
    }

    return 0;
}
