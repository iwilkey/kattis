// Accepted

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	static int x[3], y[3], nreoc[2];
	for(int i = 0; i < 3; i++)
		cin >> x[i] >> y[i];

	for(int i = 0; i < 2; i++) {
		sort(((!i) ? x : y), ((!i) ? x : y) + 3);
		nreoc[i] = (!i) ? x[0] : y[0];
		if(((!i) ? x[1] : y[1]) == nreoc[i])
			nreoc[i] = ((!i) ? x[2] : y[2]);
	}

	cout << nreoc[0] << " " << nreoc[1] << endl;

	return 0;
}
