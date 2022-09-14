// Accepted

include <iostream>
#include <vector>
using namespace std;

int main() {
	int s, t, n;
	cin >> s >> t >> n;
	vector<int> d, b, c;
	for(int i = 0; i < n + 1; i++) {
		int nn; cin >> nn;
		d.push_back(nn);
	}
 	for(int i = 0; i < n; i++) {
 		int nn; cin >> nn;
		b.push_back(nn);
 	}
 	for(int i = 0; i < n; i++) {
 		int nn; cin >> nn;
		c.push_back(nn);
 	}

 	int time = 0, node = 0;
 	while(true) {
 		time += d[node];
 		if(node == n) break;
 		while(true) {
 			if(time % c[node] == 0) {
 				time += b[node];
 				node++;
 				break;
 			}
 			time++;
 		}
	}

	if(time + s <= t)
		cout << "yes" << endl;
	else cout << "no" << endl;

	return 0;
}
