// I will use my A* pathfinder object to solve.

#include <iostream>
#include <cfloat>
#include <vector>
#include <stack>
#include <math.h>
using namespace std;

struct node {
    int x, y, parentX, parentY;
    float gCost, hCost, fCost;
};

inline bool operator < (const node & lhs, const node & rhs) {
    return lhs.fCost < rhs.fCost;
}

// Pathfinder utilizing A*.
class Pathfinder {
    public:

        vector<node> solve(vector< vector<int> > convert, 
            const int width, const int height, int valid, node start, node dest) {
            this->width = width;
            this->height = height;
            this->map = convert;
            this->valid = valid;
            return aStar(start, dest);
        }

        vector<node> solve(vector< vector<int> > convert, 
            const int width, const int height, int valid, node start,
            node dest, bool cardinal) {
            this->width = width;
            this->height = height;
            this->map = convert;
            this->valid = valid;
            this->cardinal = cardinal;
            return aStar(start, dest);
        }

    private:

        int width, height, valid;
        vector< vector<int> > map;
        bool cardinal = false;

        bool isValid(int x, int y) {
            if(x < 0) return false;
            if(y < 0) return false;
            if(x >= width) return false;
            if(y >= height) return false;
            if(map[y][x] != this->valid) return false;
            return true;
        }

        bool isDestination(int x, int y, node dest) {
            if(x == dest.x && y == dest.y) return true;
            return false;
        }

        double calculateH(int x, int y, node dest) {
            double H = (sqrt((x - dest.x) * (x - dest.x)
                + (y - dest.y) * (y - dest.y)));
            return H;
        }

        vector<node> aStar(node start, node dest) {
            vector<node> empty;
            if(!isValid(dest.x, dest.y)) return empty;
            if(isDestination(start.x, start.y, dest)) {
                vector<node> ret(1, dest);
                return ret;
            }
            
            bool closedList[height][width];

            node n;
            vector< vector<node> > mm(height, vector<node>(width, n));
            // Convert int map to node map...
            for(int y = 0; y < this->height; y++) {
                for(int x = 0; x < this->width; x++) {
                    mm[y][x].fCost = FLT_MAX;
                    mm[y][x].gCost = FLT_MAX;
                    mm[y][x].hCost = FLT_MAX;
                    mm[y][x].parentX = -1;
                    mm[y][x].parentY = -1;
                    mm[y][x].x = x;
                    mm[y][x].y = y;

                    closedList[y][x] = false;
                }
            }

            int x = start.x;
            int y = start.y;
            mm[y][x].fCost = 0.0;
            mm[y][x].gCost = 0.0;
            mm[y][x].hCost = 0.0;
            mm[y][x].parentX = x;
            mm[y][x].parentY = y;

            vector<node> openList;  
            openList.push_back(mm[y][x]);
            bool destinationFound = false;

            while (!openList.empty() && openList.size() < width * height) {
                node n;
                do {
                    float temp = FLT_MAX;
                    vector<node>::iterator itNode;
                    for(vector<node>::iterator it = openList.begin();
                        it != openList.end(); it = next(it)) {
                        node nn = *it;
                        if(nn.fCost < temp) {
                            temp = nn.fCost;
                            itNode = it;
                        }
                    }
                    n = *itNode;
                    openList.erase(itNode);
                } while(!isValid(n.x, n.y));

                x = n.x;
                y = n.y;
                closedList[y][x] = true;

                // NEWS and diags.
                for(int newX = -1; newX <= 1; newX++) {
                    for(int newY = -1; newY <= 1; newY++) {

                        if(this->cardinal) 
                            if(abs(newX) && abs(newY)) 
                                continue;
                        
                        double gNew, hNew, fNew;
                        if(isValid(x + newX, y + newY)) {
                            if(isDestination(x + newX, y + newY, dest)) {
                                mm[y + newY][x + newX].parentX = x;
                                mm[y + newY][x + newX].parentY = y;
                                destinationFound = true;
                                return makePath(mm, dest);
                            } else if(!closedList[y + newY][x + newX]) {
                                gNew = n.gCost + 1.0f;
                                hNew = calculateH(x + newX, y + newY, dest);
                                fNew = gNew + hNew;

                                if(mm[y + newY][x + newX].fCost == FLT_MAX ||
                                    mm[y + newY][x + newX].fCost > fNew) {
                                    mm[y + newY][x + newX].fCost = fNew;
                                    mm[y + newY][x + newX].gCost = gNew;
                                    mm[y + newY][x + newX].hCost = hNew;
                                    mm[y + newY][x + newX].parentX = x;
                                    mm[y + newY][x + newX].parentY = y;
                                    openList.push_back(mm[y + newY][x + newX]);
                                }
                            }
                        }
                    }
                }
            }
            if(destinationFound == false) return empty;
            return empty;
        }

        vector<node> makePath(vector< vector<node> > map, node dest) {
            vector<node> empty;
            try {
                int x = dest.x,
                    y = dest.y;
                stack<node> path;
                vector<node> usablePath;

                while(!(map[y][x].parentX == x && map[y][x].parentY == y) 
                    && map[y][x].x != -1 && map[y][x].y != -1) {
                    path.push(map[y][x]);
                    int tempX = map[y][x].parentX,
                        tempY = map[y][x].parentY;
                    x = tempX; y = tempY;
                }
                path.push(map[y][x]);

                while(!path.empty()) {
                    node top = path.top();
                    path.pop();
                    usablePath.push_back(top);
                }
                return usablePath;
            } catch(const exception & e) {
                cout << "Error: " << e.what() << endl;
            }
            return empty;
        }
};

// Solve problem here...
int main(void) {

    int width, height; cin >> height >> width;
    vector< vector<int> > map(height, vector<int>(width, -1));
    for(int y = 0; y < height; y++) {
        static string s; 
        cin >> s;
        for(int x = 0; x < s.size(); x++)
            map[y][x] = (int)(s[x] - '0');
    }

    int nodes; cin >> nodes;
    vector< pair<node, node> > waypoints;
    for(int i = 0; i < nodes; i++) {
        static node node1, node2;
        cin >> node1.y >> node1.x >> node2.y >> node2.x;    
        node1.y--; node1.x--; node2.y--; node2.x--;
        waypoints.push_back(make_pair(node1, node2));
    }

    // Solve each puzzle...
    Pathfinder pathfinder;
    for(pair<node, node> waypoint : waypoints) {
        vector<node> solBin = pathfinder.solve(map, width, height, 0, waypoint.first, waypoint.second, true),
            solDec = pathfinder.solve(map, width, height, 1, waypoint.first, waypoint.second, true);
        if(solBin.size() != 0) cout << "binary" << endl;
        else if(solDec.size() != 0) cout << "decimal" << endl;
        else cout << "neither" << endl;
    }

    return 0;
}
