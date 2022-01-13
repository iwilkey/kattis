// Accepted

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> tokenize(string line, char split) {
	vector<string> ret;
	stringstream check(line);
	string imme;
	while(getline(check, imme, split))
		ret.push_back(imme);
	return ret;
}

int main() {

	string line;
	getline(cin, line);
	vector<string> problemSets = tokenize(line, ';');
	int count = 0;
	for(int i = 0; i < problemSets.size(); i++) {
		static vector<string> problems;
		problems.clear();
		problems = tokenize(problemSets[i], '-');
		if(problems.size() == 1) count++;
		else count += (stoi(problems[1]) - stoi(problems[0])) + 1;
	}

	cout << count << endl;
	return 0;
}
