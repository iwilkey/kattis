// Accepted

#include <iostream>
#include <string>
using namespace std;

int main() {
	string word1, word2;
	cin >> word1 >> word2;
	char firstSharedLetter;
	int firstWordIndex;
	bool done = false;
	for(int i = 0; i < word1.length(); i++) {
		for(int ii = 0; ii < word2.length(); ii++) {
			if(word1[i] == word2[ii]) {
				firstSharedLetter = word1[i];
				firstWordIndex = i;
				done = true;
				break;
			} 
		}
		if(done) break;
	}
	bool once = false;
	for(int i = 0; i < word2.length(); i++) {
		if(word2[i] == firstSharedLetter and !once) {
			cout << word1;
			once = true;
		} else {
			for(int ii = 0; ii < word1.length(); ii++) {
				if(ii == firstWordIndex) cout << word2[i];
				else cout << ".";
			}
		}
		cout << endl;
	}
	return 0;
}
