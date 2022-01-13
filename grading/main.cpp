// Accepted

#include <iostream>
using namespace std;

int main() {
	int grades[5] = { 0 }, actual;
	for(int i = 0; i < 5; i++) 
		cin >> grades[i];
	cin >> actual;
	for(int i = 0; i < 5; i++) {
		if(grades[i] <= actual) {
			switch(i) {
				case 0: cout << 'A'; break;
				case 1: cout << 'B'; break;
				case 2: cout << 'C'; break;
				case 3: cout << 'D'; break;
				case 4: cout << 'E';
			}
			return 0;
		}			
	}
	cout << 'F' << endl;
	return 0;
}
