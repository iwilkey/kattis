// Accepted

#include <iostream>
using namespace std;

int main() {
	string line;
	getline(cin, line);
	for(int i = 0; i < line.size() - 1; i++) {
		if((line[i] == ':' && line[i + 1] == ')') ||
			(line[i] == ';' && line[i + 1] == ')')) 
				cout << i << endl;
		if(i <= line.size() - 3) 
			if((line[i] == ';' && line[i + 1] == '-' && line[i + 2] == ')') ||
				(line[i] == ':' && line[i + 1] == '-' && line[i + 2] == ')'))
					cout << i << endl;	
	}
	return 0;
}
