#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<vector<int>> rectangles, circles;

	int targs; cin >> targs;
	for(int i = 0; i < targs; i++) {
		string name; cin >> name;
		if(name == "rectangle") {
			vector<int> dims;
			dims.resize(4);
			cin >> dims[0] >> dims[1] >> dims[2] >> dims[3];
			rectangles.push_back(dims);
		} else {
			vector<int> dims;
			dims.resize(3);
			cin >> dims[0] >> dims[1] >> dims[2];
			circles.push_back(dims);
		}
	}

	int shots, count = 0; cin >> shots;
	for(int i = 0; i < shots; i++) {
		count = 0;
		int x, y; cin >> x >> y;
		for(vector<int> v : rectangles) 
			if(x >= v[0] and x <= v[2] and y >= v[1] and y <= v[3]) count++;
		for(vector<int> v : circles) {
			float angle = atan(double(y - v[1]) / (x - v[0]));
			float maxX = v[0] + (v[2] * cos(angle));
			float maxY = v[1] + (v[2] * sin(angle));
			cout << maxX << " " << maxY << endl;
			if(x >= -maxX and x <= maxX and y >= -maxY and y <= maxY) count++;
		}
		cout << count << endl;
	}
	
	return 0;
}
