// Accepted

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int s; cin >> s;
	cin.ignore();
	vector<string> out;
	bool go = true;
	for(int i = 0; i < s; i++) {
		static string line;
		getline(cin, line);
		if(go) out.push_back(line);
		go = !go;
	}

	for(int i = 0; i < out.size(); i++)
		cout << out[i] << endl;

	return 0;
}
