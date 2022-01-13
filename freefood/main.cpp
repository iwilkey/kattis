// Accepted

#include <iostream>
#include <vector>
using namespace std;

bool inHad(vector<int> & had, int check) {
	for(int i = 0; i < had.size(); i++)
		if(check == had[i]) return true;
	return false;
}

int main() {
	int d; cin >> d;
	vector<int> had;
	for(int i = 0; i < d; i++) {
		static int from, to; 
		cin >> from >> to;
		for(int ii = from; ii <= to; ii++) {
			if(inHad(had, ii)) continue;
			had.push_back(ii);
		}
	}
	cout << had.size() << endl;
	return 0;
}
