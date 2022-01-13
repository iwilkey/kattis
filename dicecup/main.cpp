#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int die[2]; cin >> die[0] >> die[1];
	if(die[0] == die[1]) {
		cout << die[0] + 1 << endl;
		return 0;
	}
	sort(die, die + 2);
	for(int i = die[0] + 1; i <= die[1] + 1; i++)
		cout << i << endl;
	return 0;
}
