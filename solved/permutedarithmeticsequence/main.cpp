#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	int lists; cin >> lists;
	vector< vector<int> > list;
	for(int i = 0; i < lists; i++) {xwx
		static int size; cin >> size;
		vector<int> ls;
		for(int ii = 0; ii < size; ii++) {
			static int in; cin >> in;
			ls.push_back(in);
		}
		list.push_back(ls);
	}

	for(int i = 0; i < list.size(); i++) {
		vector<int> diff;
		for(int s = 0; s < list[i].size() - 1; s++)
			diff.push_back(abs(list[i][s] - list[i][s + 1]));
	
		bool same = true;
		for(int d = 1; d < diff.size(); d++) {
			if(diff[d] != diff[0]) {
				same = false;
				break;
			}
		}

		if(same) {
			cout << "arithmetic" << endl;
			continue;
		}

		bool permute = true;
		sort(diff.begin(), diff.end());
		if(diff[0] == 0) {
			permute = false;
			goto skip;
		}
		for(int d = 1; d < diff.size(); d++) {
			if(diff[d] % diff[0] != 0) {
				permute = false;
				break;
			}
		}
		skip:;

		if(permute) cout << "permuted arithmetic" << endl;
		else cout << "non-arithmetic" << endl;
	}

	return 0;
}