// Accepted

#include <iostream>
using namespace std;

int main() {
	const string p = "PER";
	string line;
	getline(cin, line);
	int count = 0;
	for(int i = 0; i < line.size(); i += 3)
		for(int c = 0; c < 3; c++)
			if(line[i + c] != p[c]) 
				count++;
	cout << count << endl;
	return 0;
}
