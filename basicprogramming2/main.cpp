#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {

	int n, t; 
	cin >> n >> t;
	vector<int> a;
	for(int i = 0; i < n; i++) {
		static int in; cin >> in;
		a.push_back(in);
	}

	vector< pair<int, int> > occur;

	switch(t) {
		case 1:

			for(int x = 0; x < a.size() - 1; x++) {
				for(int y = x + 1; y < a.size(); y++) {
					if(a[x] != a[y]) {
						if(a[x] + a[y] == 7777) {
							cout << "Yes" << endl;
							return 0;
						}
					}
				}
			}

			cout << "No" << endl;

			break;

		case 2:

			sort(a.begin(), a.end());
			for(int x = 0; x < a.size() - 1; x++) {
				if(a[x] == a[x + 1]) {
					cout << "Contains duplicate" << endl;
					return 0;
				}
			}

			cout << "Unique" << endl;

			break;

		case 3:	

			for(int x = 0; x < a.size(); x++) {
				for(pair<int, int> & o : occur) {
					if(a[x] == o.first) {
						o.second++;
						goto cont;
					}
				}
				occur.push_back(make_pair(a[x], 1));
				cont:;
			}

			for(pair<int, int> o : occur) {
				if(o.second > (n / 2)) {
					cout << o.first << endl;
					return 0;
				}
			}

			cout << -1 << endl;

			break;

		case 4:

			sort(a.begin(), a.end());
			if(a.size() % 2 == 0) {
				cout << a[(int)(a.size() / 2) - 1] << " ";
				cout << a[(int)(a.size() / 2)] << endl;
			} else cout << a[(int)(a.size() / 2)] << endl;
		
			break;

		case 5:

			sort(a.begin(), a.end());

			for(int i = 0; i < a.size(); i++) {
				if(a[i] <= 999 && a[i] >= 100)
					cout << a[i] << " ";
			}
			cout << endl;

			break;
	}

	return 0;
}
