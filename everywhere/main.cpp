// Accepted

#include <iostream>
#include <vector>
using namespace std;

bool in(vector<string> inp, string check) {
	for(int i = 0; i < inp.size(); i++)
		if(check == inp[i]) return true;
	return false;
}

int main() { 
	int c; cin >> c;
	for(int cc = 0; cc < c; cc++) {
		static int n; cin >> n;
		cin.ignore();
		static vector<string> places;
		places.clear();
		for(int i = 0; i < n; i++) {
			string line;
			getline(cin, line);
			if(!in(places, line)) places.push_back(line);
		}
		cout << places.size() << endl;
	}
	return 0;
}
