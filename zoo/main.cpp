#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> tokenize(string line) {
	vector<string> ret;
	string imme;
	stringstream check(line);
	while(getline(check, imme, ' '))
		ret.push_back(imme);
	return ret;
}

void add(string animal, vector< pair<string, int> > & animals) {
	bool found = false;
	for(pair<string, int> & a : animals) {
		if(a.first == animal) {
			a.second++;
			found = true;
			break;
		}
	}
	if(!found)
		animals.push_back(make_pair(animal, 1));
	return;
}

void toLower(string & in) {
	for(int c = 0; c < in.size(); c++) {
		if(in[c] <= 'Z' && in[c] >= 'A')
	        in[c] -= ('Z' - 'z');
	}
	return;
}

int main(void) {

	int lists = 0;
	while(true) {
		static int num;
		cin >> num;
		cin.ignore();
		if(num == 0) break;
		lists++;
		vector< pair<string, int> > animals;
		for(int i = 0; i < num; i++) {
			static string line;
			getline(cin, line);
			vector<string> list = tokenize(line);
			string name = list[list.size() - 1];
			toLower(name);
			add(name, animals);
		}
		cout << "List " << lists << ": " << endl;
		sort(animals.begin(), animals.end());
		for(pair<string, int> animal : animals)
			cout << animal.first << " | " << animal.second << endl;	
	}

	return 0;
}
