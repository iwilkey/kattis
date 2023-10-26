// Accepted

#include <iostream>
using namespace std;

int main() {
	uint8_t cups[3] = { 1, 0, 0 };
	string moves;
	getline(cin, moves);
	for(int i = 0; i < moves.size(); i++) {
		static char move;
		move = moves[i];
		switch(move) {
			case 'A':
				swap(cups[0], cups[1]);
				break;
			case 'B':
				swap(cups[1], cups[2]);
				break;
			case 'C':
				swap(cups[0], cups[2]);
				break;
		}
	}
	for(int i = 0; i < 3; i++)
		if(cups[i] == 1) cout << i + 1 << endl;
	return 0;
}
