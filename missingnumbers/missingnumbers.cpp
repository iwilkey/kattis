#include <iostream>
#include <algorithm>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::find;

// SOLUTION ACCEPTED
int main() {

	int numLength; cin >> numLength;
	vector<int> count, missing;
	for(int i = 0; i < numLength; i++){
		int num; cin >> num;
		count.push_back(num);
	}

	for(int i = 1; i < count[count.size() - 1]; i++) {
		if(find(count.begin(), count.end(), i) == count.end()) 
			missing.push_back(i);
	}

	if(missing.size() > 0)
		for(int i : missing) cout << i << "\n";
	else cout << "good job" << "\n";

	return 0;
}