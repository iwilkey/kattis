#include <iostream>
#include <vector>
using namespace std;

int main() {
	int people; cin >> people;
	vector<int> order;
	for(int p = 0; p < people; p++) 
		order.push_back(1);
	for(int p = 0; p < people - 1; p++) {
		int distanceFromJimmy; cin >> distanceFromJimmy;
		order[distanceFromJimmy + 1] = p + 2;
	}
	for(int p : order) cout << p << " ";
	cout << endl;
	return 0;
}
