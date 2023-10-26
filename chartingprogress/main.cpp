#include <iostream>
using namespace std;

int main(int argc, char ** args) {
	while(!cin.eof()) {
		static int count = 0;
		static string line;
		getline(cin, line);
		if(line.empty()) {
			count = 0;
			cout << endl;
			continue;
		}
		int localCount = 0;
		for(int c = 0; c < line.size(); c++)
			if(line[c] == '*') {
				line[c] = '.';
				localCount++; // How many.
			}
		for(int i = 0; i < localCount; i++)
			line[line.size() - 1 - i - count] = '*';
		count += localCount;	
		cout << line << endl;
	}
	return 0;
}
