// Accepted

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, p, s; 
	cin >> n >> p >> s;
	for(int i = 0; i < s; i++) {
		static int size; cin >> size;
		bool found = false;
		for(int ii = 0; ii < size; ii++) {
			static int card; cin >> card;
			if(card == p) found = true;
		}
		if(found) cout << "KEEP" << endl;
		else cout << "REMOVE" << endl;
	}
	return 0;
}
