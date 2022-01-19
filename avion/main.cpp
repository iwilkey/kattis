// Accepted

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> found;
	for(int i = 0; i < 5; i++) {
		static string line;
		getline(cin, line);
		for(int c = 0; c < line.size() - 2; c++)
			if(line.substr(c, 3) == "FBI")
				found.push_back(i + 1);
	}
	if(found.size() == 0) cout << "HE GOT AWAY!";
	else for(int i = 0; i < found.size(); i++) 
				cout << found[i] << " ";
	cout << endl;
	return 0;
}
