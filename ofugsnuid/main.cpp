// Accepted

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int c; cin >> c;
	vector<int> ins;
	for(int i = 0; i < c; i++) {
		static int in; cin >> in;
		ins.push_back(in);
	}
	for(int i = ins.size() - 1; i >= 0; i--) 
		cout << ins[i] << endl;
	return 0;
}
