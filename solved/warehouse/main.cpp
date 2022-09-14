#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void addData(vector< pair<int, vector<string> > > & subData, string name, int amount) {
	int holdAmount = 0;
	int d = 0;
	for(pair<int, vector<string> > & entry : subData) {
		int i = 0;
		for(string toy : entry.second) {
			if(name == toy) {
				holdAmount = entry.first;
				entry.second.erase(entry.second.begin() + i);
				if(entry.second.size() == 0)
					subData.erase(subData.begin() + d);
				goto out;
			}
			i++;
		}
		d++;
	}
	out:;
	amount += holdAmount;
	bool found = false;
	for(pair<int, vector<string> > & entry : subData) {
		if(entry.first == amount) {
			entry.second.push_back(name);
			found = true;
			break;
		}
	}
	if(!found) {
		vector<string> in;
		in.push_back(name);
		subData.push_back(make_pair(amount, in));
	}
	return;
}

int main(void) {
	int shipments; 
	cin >> shipments;
	for(int i = 0; i < shipments; i++) {
		vector< pair<int, vector<string> > > subData;
		static int in;
		cin >> in;
		cin.ignore();
		for(int ii = 0; ii < in; ii++) {
			static string line, name;
			static int num;
			getline(cin, line);
			for(int c = 0; c < line.size(); c++) {
				if(line[c] == ' ') {
					name = line.substr(0, c);
					num = stoi(line.substr(c, line.size() - c));
				}
			}
			addData(subData, name, num);
		}
		// Sorting...
		sort(subData.begin(), subData.end());
		reverse(subData.begin(), subData.end());
		int amount = 0;
		for(pair<int, vector<string> > & entry : subData) {
			amount += entry.second.size();
			sort(entry.second.begin(), entry.second.end());
		}
		cout << amount << endl;
		for(pair<int, vector<string> > & entry : subData) {
			for(string s : entry.second)
				cout << s << " " << entry.first << endl;
		}		
	}
	return 0;
}
