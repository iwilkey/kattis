#include <iostream>
#include <vector>
#include <cstdio>
#include <math.h>
using namespace std;

class Point {
	public:
		Point(int x, int y) { this->x = x; this->y = y; }
		int x, y;
};

struct vertex
{
    int x, y;
};

int det(struct vertex* v1, struct vertex* v2)
{
    return v1->x * v2->y - v1->y * v2->x;
}

int main() {

	while(1)
    {
        int n;
        scanf("%d",&n);
        if (!n) break;

        struct vertex vertices[n];
        for (int i = 0; i < n; i++) scanf("%d %d", &(vertices + i)->x, &(vertices + i)->y);

        int sum = 0;
        for (int i = 0; i < n - 1; i++) sum += det(vertices + i, vertices + i + 1);
        sum += det(vertices + n - 1, vertices);

        if (sum < 0) printf("CW %.1f\n", -sum / 2.0);
        else printf("CCW %.1f\n", sum / 2.0);
    }
    return 0;


	/*
	while(true) {
		int numVert; cin >> numVert;
		if(numVert == 0) break;
		vector<Point> verts;
		for(int i = 0; i < numVert; i++) {
			int x, y; cin >> x >> y;
			Point p(x, y);
			verts.push_back(p);
		}

		int n1 = 0, n2 = 1;
		float area = 0.0;
		while(true) {
			area += (float(verts[n1].x) * verts[n2].y) 
				- (float(verts[n1].y) * verts[n2].x);
			if(n2 == 0) break;
			n1++; n2++;
			n2 %= verts.size();
		}

		area = 0.5f * area;
		if(area < 0) printf("CW %.1f\n", -area);
		else printf("CCW %.1f\n", area);
	}
	*/

	return 0;
}
