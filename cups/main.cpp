#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main(void) {

	int cases; cin >> cases;
	cin.ignore();
	vector< pair<int, string> > info;
	for(int i = 0; i < cases; i++) {
		static string line, first, second;
		getline(cin, line);
		for(int c = 0; c < line.size(); c++) {
			if(line[c] == ' ') {
				first = line.substr(0, c);
				second = line.substr(c + 1, line.size() - c);
				if((int)(first[0] - '0') <= 9)
					info.push_back(make_pair(stoi(first) / 2, second));
				else info.push_back(make_pair(stoi(second), first));
				break;
			}
		}
	}

	sort(info.begin(), info.end());
	for(pair<int, string> p : info)
		cout << p.second << endl;

	return 0;
}
