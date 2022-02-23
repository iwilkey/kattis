#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int c; cin >> c;
	for(int i = 0; i < c; i++) {
		static vector<long long int> people;
		people.clear();
		static long long int p; cin >> p;
		for(int pp = 0; pp < p; pp++) {
			static long long int value; cin >> value;
			people.push_back(value);
		}

		sort(people.begin(), people.end());
		for(int pp = 0; pp < people.size() - 1; pp++) {
			if(people[pp] == people[pp + 1])
				people[pp] = people[pp + 1] = -1;
		}
		
		int oddman = -1;
		for(int p = 0; p < people.size(); p++)
			if(people[p] != -1) oddman = people[p];
		
		cout << "Case #" << i + 1 << ": " << oddman << endl;
	}
	return 0;
}
