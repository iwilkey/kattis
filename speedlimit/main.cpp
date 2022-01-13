// Accepted

#include <iostream>
using namespace std;

void solve(int numPoints) {
	int miles = 0;
	int lookatSpeed = 0, lookatTime = 0, lastTime = 0;
	for(int i = 0; i < numPoints; i++) {
		lastTime = lookatTime;
		cin >> lookatSpeed >> lookatTime;
		miles += lookatSpeed * (lookatTime - lastTime);
	}
	cout << miles << " miles\n";
}

int main() {
	int in;
	while(true) {
		cin >> in;
		if(in == -1) break;
		else solve(in);
	}
	return 0;
}
