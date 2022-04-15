#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int nums;
	cin >> nums;

	vector<int> mynums;
	int anum;
	while(cin >> anum){
		mynums.push_back(anum);
	}

	sort(mynums.begin(),mynums.end());
	int groups = nums / 3 + 1;
	
	int sum = 0;
	for(int i = 0; i < groups;i++){
		int m = INT_MAX;
		for(int j = i; j < nums; j += groups){
			sum += mynums[j];
			m = min(m,mynums[j]);

		}
		cout << m << endl;
		sum -= m;
	}
	cout << sum;
	return 0;
}