#include <iostream>
using namespace std;

int main() {
	int e, f, c, cc;
	cin >> e >> f >> c;
	e += f;
	cc = c - 1;
	int turns = 0;
	while(e >= c) {
		e -= cc;
		turns++;
	}
	cout << turns << endl;
	return 0;
}
