#include <iostream>
using namespace std;

int main() {
	int a, b, c, nom = 0; 
	cin >> a >> b >> c;
	while(true) {
		if(a == b - 1 && b == c - 1) break;
		static int gap[2] = { 0, 0 };
		gap[0] = b - a - 1;
		gap[1] = c - b - 1;
		if(gap[0] < gap[1]) {
			a = b;
			b = c - 1;
		} else {
			c = b;
			b = a + 1;
		}
		nom++;
	}
	cout << nom << endl;
	return 0;
}
