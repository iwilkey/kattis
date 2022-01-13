// Accepted

#include <iostream>
using namespace std;

int main() {
	int p; cin >> p;
	cin.ignore();
	for(int i = 0; i < p; i++) {
		static string line;
		static int sum;
		getline(cin, line);
		if(line == "P=NP") {
			cout << "skipped" << endl;
			continue;
		}
		string nums[2];
		for(int c = 0; c < line.size(); c++)
			if(line[c] == '+') {
				nums[0] = line.substr(0, c);
				nums[1] = line.substr(c, line.size() - c);
			}
		sum = stoi(nums[0]) + stoi(nums[1]);
		cout << sum << endl;
	}
	return 0;
}
