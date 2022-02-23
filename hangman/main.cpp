#include <iostream>
using namespace std;

int in(string word, char a) {
	int freq = 0;
	for(int aa = 0; aa < word.size(); aa++)
		if(a == word[aa])
			freq++;
	return freq;
}

int main() {
	string word, order; 
	getline(cin, word);
	getline(cin, order);
	int ll = word.size(), wrong = 0;
	for(int a = 0; a < order.size(); a++) {
		static int delta;
		delta = in(word, order[a]);
		if(delta == 0) wrong++;
		ll -= delta;
		if(ll == 0) {
			cout << "WIN" << endl;
			break;
		} else if(wrong >= 10) {
			cout << "LOSE" << endl;
			break;
		}
	}
	return 0;
}
