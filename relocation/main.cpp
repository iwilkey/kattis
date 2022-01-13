// Accepted

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n, q; cin >> n >> q;
	vector<int> companies;
	for(int i = 0; i < n; i++) {
		static int in;
		cin >> in;
		companies.push_back(in);
	}

	for(int i = 0; i < q; i++) {
		static int requests[3] = { 0, 0, 0 };
		for(int ii = 0; ii < 3; ii++)
			cin >> requests[ii];
		switch(requests[0]) {
			case 1:
				companies[requests[1] - 1] = requests[2];
				break;
			case 2:
				int dist = abs(companies[requests[2] - 1] - companies[requests[1] - 1]);
				cout << dist << endl;
				break;
		}
	}

	return 0;
}
