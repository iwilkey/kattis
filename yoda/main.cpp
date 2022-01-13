// Accepted

#include <iostream>
#include <bitset>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define trav(x, y) for(int x = 0; x < y; x++)
#define travi(x, i, y) for(int x = i; x < y; x++)
template <typename T> void log(string tag, T obj) { cout << tag << " " << obj << endl; }

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

int returnDigits(double num) {
	int count = 0;
	while(num >= 1) {
		num /= 10.0f;
		count++;
	}
	return count;
}

int returnPlace(int num, int dig, int place) {
	if(place > dig) return -1;
	for(int i = 0; i < place - 1; i++)
		num /= 10.0f;
	return num % 10;
}

int vectorToInt(vector<int> num) {
	if(num.size() == 0) return -1;
	int powr = 0, ret = 0;
	for(int i = 0; i < num.size(); i++) {
		ret += num[i] * pow(10, powr);
		powr++;
	}
	return ret;
}

void solve() {
	int num1, num2;
	cin >> num1 >> num2;

	int dig1 = returnDigits(num1),
		dig2 = returnDigits(num2);
	vector<int> newDig1, newDig2;
	for(int i = 1; i <= max(dig1, dig2); i++) {
		int placeDig1 = returnPlace(num1, dig1, i),
			placeDig2 = returnPlace(num2, dig2, i);
		if(placeDig1 > placeDig2) newDig1.push_back(placeDig1);
		else if(placeDig1 < placeDig2) newDig2.push_back(placeDig2);
		else {
			newDig1.push_back(placeDig1);
			newDig2.push_back(placeDig2);
		}
	}
	
	int ans1 = vectorToInt(newDig1),
		ans2 = vectorToInt(newDig2);
	if(ans1 == -1) cout << "YODA" << endl;
	else cout << ans1 << endl;
	if(ans2 == -1) cout << "YODA" << endl;
	else cout << ans2 << endl;

	return;	
}

int main() {
	initIO(1);
	solve();
	return 0;
}
