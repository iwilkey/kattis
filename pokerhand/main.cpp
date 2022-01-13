// Accepted

#include <iostream>
#include <vector>
using namespace std;

int main() {
	const string ranks = "A23456789TJQK";
	int occur[13] = { 0 };
	vector<char> rank;
	for(int i = 0; i < 5; i++) {
		static string card; cin >> card;
		rank.push_back(card[0]);
	}
	for(int i = 0; i < rank.size(); i++) {
		for(int c = 0; c < ranks.size(); c++)
			if(rank[i] == ranks[c]) 
				occur[c]++;
	}
	int max = 0;
	for(int i = 0; i < 13; i++)
		if(occur[i] > max) max = occur[i];
	cout << max << endl;
	return 0;
}
