#include <iostream>
using namespace std;

int main(void) {
	
	int n, curr = 0, min = 0; cin >> n;
	for(int i = 0; i < n; i++) {
		static int num; cin >> num;
		curr += num;
		if(curr < min) 
			min = curr;
	}	

	cout << abs(min) << endl;

	return 0;
}
