#include <iostream>
using namespace std;

int main() {
	const static string check = "Simon says";
	int c; cin >> c;
	cin.ignore();
	for(int i = 0; i < c; i++) {
		string line;
		getline(cin, line);
		bool simon = true;
		for(int i = 0; i < check.size(); i++)
			if(line[i] != check[i]) simon = false;
		if(!simon) continue;
		cout << line.substr(check.size() + 1, 
			line.size() - check.size()) << endl;
	}	
	return 0;
}
