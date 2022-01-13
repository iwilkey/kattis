// Accepted

#include <iostream>
#include <vector>
using namespace std;

bool valid(vector<string> & univ, string univer) {
	for(int i = 0; i < univ.size(); i++)
		if(univ[i] == univer) return false;
	return true;
}

int main() {
	int c, w = 0; cin >> c;
	cin.ignore();
	vector<string> univ;
	for(int i = 0; i < c; i++) {
		static string line;
		getline(cin, line);
		string univer = "";
		for(int c = 0; c < line.size(); c++)
			if(line[c] == ' ') 
				univer = line.substr(0, c);
		if(!valid(univ, univer)) continue;
		w++; if(w > 12) break;
		univ.push_back(univer);
		cout << line << endl;
	}
	return 0;
}
