#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> returnBinaryRep(uint8_t num) {
	vector<int> ret(4, 0);
	int place = 0;
	while(num > 0) {
		ret[place] = num % 2;
		num /= 2;
		place++;
	}
	reverse(ret.begin(), ret.end());
	return ret;
}

int main() {	

	string in; 
	getline(cin, in);
	
	vector< vector<int> > reps;
	for(int d = 0; d < 4; d++) {
		static vector<int> placeRep;
		placeRep = returnBinaryRep((int)(in[d] - '0'));
		reps.push_back(placeRep);
	}

	for(int y = 0; y < 4; y++) {
		int trueX = 0;
		for(int x = 0; x < 5; x++) {
			if(x == 2) cout << " ";
			else {
				if(reps[trueX][y]) cout << "*";
				else cout << ".";
				trueX++;
			}
			if(x != 4) cout << " "; 
		}
		cout << endl;
	}

	return 0;
}
