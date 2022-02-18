#include <iostream>
using namespace std;

int main() {
	string s; cin >> s;
	int dex = 0;
	for(int c = 0; c < s.size(); c++) {
		if(s[c] == 'a') {
			dex = c;
			break;
		}
	}
	cout << s.substr(dex, s.size() - dex) << endl;
	return 0;
}