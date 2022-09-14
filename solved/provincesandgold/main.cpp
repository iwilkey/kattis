// Accepted

#include <iostream>
using namespace std;

string returnNameByCostIndex(int index) {
	switch(index) {
		case 0: return "Copper"; break;
		case 1: return "Silver"; break;
		case 2: return "Gold"; break;
		case 3: return "Estate"; break;
		case 4: return "Duchy"; break;
		case 5: return "Province";
	}
	return "";
}

int main() {
	int cards[3];
	for(int i = 0; i < 3; i++)
		cin >> cards[i];
	int power = 0;
	for(int i = 0; i < 3; i++) {
		switch(i) {
			case 0: power += 3 * cards[i]; break;
			case 1: power += 2 * cards[i]; break;
			case 2: power += 1 * cards[i];
		}
	}

	// Card cost by index
	int costs[6] = {
		/* Treasure */ 0, 3, 6, 2, 5, 8 // Dominion
	};

	int bestDT[2] = { -1, 0 };
	for(int i = 0; i < 6; i++)
		if(costs[i] <= power)
			bestDT[(i < 3) ? 1 : 0] = i; 
	
	string dominion = (bestDT[0] != -1) ? (returnNameByCostIndex(bestDT[0]) + " or ") : "",
		treasure = returnNameByCostIndex(bestDT[1]);
		
	cout << ((dominion != "") ? dominion : "") << treasure << endl;
	return 0;
}
