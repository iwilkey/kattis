#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> input;
	for(int i = 0; i < 10; i++) {
		int in; cin >> in;
		input.push_back(in % 42);
	} 

	for(int i = 0; i < input.size(); i++) {
		for(int ii = 0; ii < input.size(); ii++) {
			if(i == ii) continue;
			if(input[i] == input[ii]) {
				input.erase(input.begin() + ii);
				ii--;
			}
		}
	}

	cout << input.size() << endl;
	return 0;
}
