// Accepted

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int returnBaseBranch(int num, vector<vector<int>> &tree) {
	for(int vec = 0; vec < tree.size(); vec++) 
		for(int i = 0; i < tree[vec].size(); i++) 
			if(i != 0 and tree[vec][i] == num) return tree[vec][0];
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int startingBranch; 
	vector<vector<int>> tree;
	vector<int> solution;
	while(true) {
		string line;
		getline(cin, line);
		if(line == "") break;
		vector<string> tokens;
		stringstream check(line);
		string im;
		while(getline(check, im, ' ')) 
			tokens.push_back(im);
		vector<int> ints;
		for(string s : tokens) {
			if(stoi(s) == -1) break;
			ints.push_back(stoi(s));
		}
		tree.push_back(ints);
	}
	startingBranch = tree[0][0];
	solution.push_back(startingBranch);
	tree.erase(tree.begin());
	int currentPos = startingBranch;
	while(true) {
		int base = returnBaseBranch(currentPos, tree);
		if(base == -1) break;
		else {
			solution.push_back(base);
			currentPos = base;
		}
	}
	for(int i : solution) cout << i << " ";
	cout << endl;
	return 0;
}
