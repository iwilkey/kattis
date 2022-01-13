// Accepted

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
	int c; cin >> c;
	vector< pair<int, int> > data;
	for(int i = 0; i < c; i++) {
		static pair<int, int> dat = make_pair(0, 0);
		cin >> dat.first >> dat.second;
		data.push_back(dat);
	}
	int maxAvg = 0;
	for(int i = 0; i < c - 1; i++) {
		int avg = (data[i + 1].second - data[i].second) 
			/ (data[i + 1].first - data[i].first);
		if(avg > maxAvg) maxAvg = avg;
	}
	cout << maxAvg << endl;
	return 0;
}
