#include <iostream>
using namespace std;

void clean(string & s) {
	for(int c = 0; c < s.size(); c++) {
		if(s[c] >= 'A' && s[c] <= 'Z')
			s[c] -= 'A' - 'a';
		else if(!(s[c] >= 'a' && s[c] <= 'z')) {
			s.erase(c, 1);
			c--;
		}
	}
}

int main() {
	int c; cin >> c;
	cin.ignore();
	for(int i = 0; i < c; i++) {
		string alpha = "abcdefghijklmnopqrstuvwxyz";
		string line;
		getline(cin, line);
		clean(line);
		for(int c = 0; c < line.size(); c++) {
			for(int a = 0; a < alpha.size(); a++) {
				if(line[c] == alpha[a]) {
					alpha.erase(a, 1);
					a--;
				}
			}
		}
		if(alpha.size() > 0) cout << "missing " << alpha << endl;
		else cout << "pangram" << endl;
	}
	return 0;
}
