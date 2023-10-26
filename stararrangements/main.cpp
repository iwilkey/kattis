#include <iostream>
using namespace std;

int main() {
	int s; cin >> s;
	cout << s << ":" << endl;
	for(int f = 2; f <= (s / 2) + 1; f++)
		for(int e = f - 1; e <= f; e++)
			if((s % (f + e)) % f == 0) 
				cout << f << "," << e << endl;
	return 0;
}
