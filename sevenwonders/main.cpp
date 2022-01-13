// Accepted

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	string line;
	getline(cin, line);
	const pair<char, int> code[3] = {
		make_pair('T', 0),
		make_pair('C', 1),
		make_pair('G', 2)
	};
	int occur[3] = { 0, 0, 0 };
	for(int i = 0; i < line.size(); i++)
		for(int c = 0; c < 3; c++) 
			if(line[i] == code[c].first)
				occur[code[c].second]++;
	int sum = 0;
	for(int i = 0; i < 3; i++)
		sum += pow(occur[i], 2);
	int max = 0;
	while(true) {
		for(int i = 0; i < 3; i++)
			if(max + 1 > occur[i]) 
				goto out;
		max++;
	}
	out:;
	sum += (7 * max);
	cout << sum << endl;
	return 0;
}
