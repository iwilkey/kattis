// Accepted

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int c; cin >> c;
	int turt = 1;
	for(int i = 0; i < c; i++) {
		static vector<int> turts;
		turts.clear();
		while(true) {
			static int num; cin >> num;
			if(num == 0) break;
			turts.push_back(num);
		}
		int import = 0;
		for(int t = 0; t < turts.size() - 1; t++) 
			if(turts[t] * 2 <= turts[t + 1])
				import += turts[t + 1] - (turts[t] * 2);	
		cout << import << endl;
	}	

	return 0;
}
