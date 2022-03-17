#include <iostream>
#include <vector>
using namespace std;

int main(void) {


	int cases; cin >> cases;
	vector<string> list;
	cin.ignore();
	for(int i = 0; i < cases; i++) {
		static string line;
		getline(cin, line);
		list.push_back(line);
	}

	bool increasing = true;
	for(int i = 0; i < list.size() - 1; i++) {
		string higher = list[i], 
			lower = list[i + 1];
		int delta = 0, upto = min(higher.size(), lower.size());	
		for(int c = 0; c < upto; c++) {
			if(higher[c] != lower[c]) {
				delta = lower[c] - higher[c];
				break;
			}
		}
		
		if(i == 0) {
			// solid guess.
			if(delta < 0) 
				increasing = false;
		} else {
			// can return.
			if((delta < 0 && increasing) || 
				(delta > 0 && !increasing)) {
				cout << "NEITHER" << endl;
				return 0;
			} 
		}
	}

	if(increasing) cout << "INCREASING" << endl;
	else cout << "DECREASING" << endl;

	return 0;
}
