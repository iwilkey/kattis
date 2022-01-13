#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// RIGHT TEST CASES, WRONG ANSWER
void combination(int offset, int k, vector<int> &array, vector<int> &combinations, vector<vector<int>> &allPossible) {
	if(k == 0) {
		allPossible.push_back(combinations);
		return;
	} 
	for(int i = offset; i <= array.size() - k; ++i) {
		combinations.push_back(array[i]);
		combination(i + 1, k - 1, array, combinations, allPossible);
		combinations.pop_back();
	}
}

int main() {
	int arrSize; cin >> arrSize;
	string arr; getline(cin, arr);
	getline(cin, arr);
	vector<int> array;
	for(char c : arr) 
		if(c != ' ') array.push_back(int(c) - '0');

	vector<int> combos;
	vector<vector<int>> allPossible;
	combination(0, 3, array, combos, allPossible);
	int sums = 0;
	for(vector<int> v : allPossible) {
		if(v[0] + v[1] == v[2]) sums++;
		else if(v[1] + v[2] == v[0]) sums++;
		else if (v[2] + v[0] == v[1]) sums++;
	}

	cout << (sums * 2) << endl;

	return 0;
}