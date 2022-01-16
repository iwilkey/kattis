// Accepted

#include <iostream>
using namespace std;

void toLower(string & in) {
	for(int c = 0; c < in.size(); c++)
		if(in[c] >= 'A' && in[c] <= 'Z')
			in[c] -= ('A' - 'a');
	return;
}

int main() {
	int c, count = 0; cin >> c;
	cin.ignore();
	for(int i = 0; i < c; i++) {
		string line;
		getline(cin, line);
		toLower(line);
		for(int c = 0; c < line.size() - 3; c++) {
			string sec = line.substr(c, 4);
			if(sec == "pink" || sec == "rose") {
				count++;
				break;
			}
		}
	}
	cout << ((count == 0) ? 
		"I must watch Star Wars with my daughter" : to_string(count)) << endl;
	return 0;
}
