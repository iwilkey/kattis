// Accepted

#include <iostream>
#include <vector>
#include <iomanip>
#include <math.h>
using namespace std;

void round(double &num, int dec) {
	num *= pow(10, dec + 1);
	int trunc = (int)num,
		lookat = trunc % 10; // This will tell if we need to round up or down.
	trunc -= lookat; trunc /= 10;
	trunc = (lookat >= 5) ? trunc + 1 : trunc;
	num = (double)trunc / (pow(10, dec));
}

void solve() {
	int stu; cin >> stu;
	int sum = 0, above = 0;
	vector<int> avgs;
	for(int i = 0; i < stu; i++) {
		int fin; cin >> fin;
		sum += fin;
		avgs.push_back(fin);
	}
	double avg = (double)sum / stu;
	for(int i = 0; i < avgs.size(); i++)
		if(avgs[i] > avg) above++;
	double ans = (((double)above / stu) * 100.0000);
	round(ans, 3);
	cout << ans << "%" << endl;
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(3);

	int cases; cin >> cases;
	for(int i = 0; i < cases; i++)
		solve();
	return 0;
}
