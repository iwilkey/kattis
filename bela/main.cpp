// Accepted

#include <iostream>
using namespace std;

typedef struct {
	char number;
	int domVal, notDomVal;
} card;

const card cards[8] = {
	{ 'A', 11, 11 },
	{ 'K', 4, 4 },
	{ 'Q', 3, 3 },
	{ 'J', 20, 2 },
	{ 'T', 10, 10 },
	{ '9', 14, 0 },
	{ '8', 0, 0 },
	{ '7', 0, 0 }
};

card returnCard(char number) {
	for(int i = 0; i < 8; i++)
		if(cards[i].number == number)
			return cards[i];
	return cards[0];
}

int main() {
	int hands, score = 0; 
	char suit;
	cin >> hands >> suit;
	cin.ignore();
	for(int i = 0; i < hands * 4; i++) {
		string line;
		getline(cin, line);
		static card c;
		c = returnCard(line[0]);
		if(line[1] == suit) score += c.domVal;
		else score += c.notDomVal;
	}
	cout << score << endl;
	return 0;
}
