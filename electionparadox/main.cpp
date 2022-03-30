#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char ** args) {

	int R, ret = 0; cin >> R;
	vector<int> Rsizes;
	for(int i = 0; i < R; i++) {
		static int rc; cin >> rc;
		Rsizes.push_back(rc);
	}

	sort(Rsizes.begin(), Rsizes.end());
	reverse(Rsizes.begin(), Rsizes.end());

	int fullFor = (int)((float)R / 2);
	for(int i = 0; i < fullFor; i++) {
		ret += Rsizes[0];
		Rsizes.erase(Rsizes.begin());
	}
	for(int i = 0; i < Rsizes.size(); i++)
		ret += (int)((float)Rsizes[i] / 2);
	cout << ret << endl;
	
	return 0;
}