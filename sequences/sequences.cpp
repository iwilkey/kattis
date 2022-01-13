#include <math.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

// TIME LIMIT EXCEEDED, but CORRECT ANSWER
void toBinary(string &builder, unsigned number){
   if (number > 1)
      toBinary(builder, number / 2);
   builder += to_string((number % 2));
}

int calculateNumberOfInversions(string number) {
	int inversions = 0,
		ind1 = 0, ind2 = 1;
	bool swappedInRun = false;
	while(true) {
		if(ind2 >= number.length()) {
			if(!swappedInRun) break;
			ind1 = 0; ind2 = 1;
			swappedInRun = false;
		}

		if(int(number[ind1] - '0') > int(number[ind2] - '0')) {
			char temp = number[ind1];
			number[ind1] = number[ind2];
			number[ind2] = temp;
			inversions++;
			swappedInRun = true;
		}

		ind1++; ind2++;
	}

	return inversions;
}

int main() {
	string seq; cin >> seq;
	const string iniSeq = seq;
	int qu = 0;
	for(char s : seq) if(s == '?') qu++;

	int sumOfInversions = 0;
	for(int i = 0; i < pow(2, qu); i++) {
		string combo;
		toBinary(combo, i);
		if(combo.length() != qu) {
			const int l = combo.length();
			for(int i = 0; i < (qu - l); i++) combo = '0' + combo;
		}
		// Combo is one of all possible combinations

		int comboIndex = 0;
		for(int i = 0; i < seq.length(); i++) {
			if(seq[i] == '?') {
				seq[i] = combo[comboIndex];
				comboIndex++;
			} 
		}

		sumOfInversions += calculateNumberOfInversions(seq);

		seq = iniSeq;
	}

	cout << int(sumOfInversions % 1000000007) << endl;

	return 0;
}
