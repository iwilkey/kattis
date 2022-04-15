#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	int cases; cin >> cases;
	for(int i = 0; i < cases; i++) {

		static int n, m; cin >> n >> m;
		vector<pair<int, vector<int> > > products;
		vector<int> stickers(m, 0);
		for(int nn = 0; nn < n; nn++) {
			pair<int, vector<int> > p;
			static int as; cin >> as;
			for(int st = 0; st < as; st++) {
				static int am; cin >> am;
				p.second.push_back(am);
			}
			static int prize; cin >> prize;
			p.first = prize;
			products.push_back(p);
		}

		for(int h = 0; h < m; h++) {
			static int am; cin >> am;
			stickers[h] = am;
		}

		int cash = 0;
		for(pair<int, vector<int> > p : products) {
			while(true) { 
				for(int s : p.second)
					if(stickers[s - 1] == 0) 
						goto done;
				for(int s : p.second)
					stickers[s - 1]--;
				cash += p.first;
			}
			done:;
		}

		cout << cash << endl;
	}

	return 0;
}
