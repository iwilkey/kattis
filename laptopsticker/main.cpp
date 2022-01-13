// Accepted

#include <iostream>
using namespace std;

int main() {
	int dim[4] = { 0 };
	for(int i = 0; i < 4; i++) 
		cin >> dim[i];
	bool valid = (((dim[0] - dim[2]) / 2) >= 1) 
		&& (((dim[1] - dim[3]) / 2) >= 1);
	cout << valid << endl;
	return 0;
}
