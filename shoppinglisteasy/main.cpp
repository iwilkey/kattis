#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void addItem(vector< pair<string, int> > & itemLog, string name) {
	for(pair<string, int> & entry : itemLog) {
		if(entry.first == name) {
			entry.second++;
			return;
		}
	}
	itemLog.push_back(make_pair(name, 1));
	return;
}

int main(void) {

	int times, items; 
	vector< pair<string, int> > itemLog;
	cin >> times >> items;
	for(int time = 0; time < times; time++) {
		for(int buy = 0; buy < items; buy++) {
			static string in; cin >> in;
			addItem(itemLog, in);
		}
	}

	vector<string> final;
	for(pair<string, int> entry : itemLog) 
		if(entry.second == times) 
			final.push_back(entry.first);

	cout << final.size() << endl;
	sort(final.begin(), final.end());
	for(string i : final)
		cout << i << endl;

	return 0;
}