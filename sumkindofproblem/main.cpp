// Accepted

#include <iostream>
using namespace std;

void solve() {
	int casenum, target,
		s1 = 0, s2 = 0, s3 = 0;
	cin >> casenum >> target;
	for(int i = 0; i <= target * 2; i++) {
		if(i <= target) s1 += i;
		if(i % 2 != 0) s2 += i;
		else s3 += i;
	}
	cout << casenum << " " << s1 << " " << s2 << " " << s3 << endl;
}

int main() {
	int casenum; cin >> casenum;
	for(int i = 0; i < casenum; i++) 
		solve();
	return 0;
}
