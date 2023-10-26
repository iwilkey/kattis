#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(int argc, char ** args) {

	int n; cin >> n;
	vector<int> rolls;
	int occur[6] = { 0 };
	for(int person = 1; person <= n; person++) {
		static int r; cin >> r;
		rolls.push_back(r);
		occur[r - 1]++;
	}

	int lf = -1;
	for(int i = 5; i >= 0; i--) {
		if(occur[i] == 1) {
			lf = i + 1;
			break;
		}
	}

	if(lf != -1) {
		for(int r = 0; r < n; r++) {
			if(rolls[r] == lf) {
				cout << r + 1 << endl;
				return 0;
			}
		}
	}
	
	cout << "none" << endl;

	return 0;
}