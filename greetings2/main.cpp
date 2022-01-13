// Accepted

#include <iostream>
using namespace std;

int es(string hey) {
	int ret = 0;
	for(int i = 0; i < hey.size(); i++)
		if(hey[i] == 'e') 
			ret++;
	return ret;
}

int main() {
	string line;
	getline(cin, line);
	string builder;
	builder += 'h';
	for(int i = 0; i < es(line) * 2; i++)
		builder += 'e';
	builder += 'y';
	cout << builder << endl;
	return 0;
}
