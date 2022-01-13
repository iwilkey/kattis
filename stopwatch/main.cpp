// Accepted

#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	if(n % 2 != 0) {
		cout << "still running" << endl;
		return 0;
	}
	uint8_t c = 0;
	int out = 0;
	for(int i = 0; i < n; i++) {
		static int time = 0, 
			last = 0;
		last = time;
		cin >> time;
		c++;
		if(c >= 2) {
			out += (time - last);
			last = 0;
			c = 0;
		}
	}
	cout << out << endl;
	return 0;
}
