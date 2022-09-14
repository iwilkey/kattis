// Accepted

#include <iostream>
using namespace std;

int sumArray(int * array, int size) {
	int ret = 0;
	for(int i = 0; i < size; i++)
		ret += array[i];
	return ret;
}

int main() {
	int maxScore = 0, cont = 0;
	for(int i = 0; i < 5; i++) {
		static int score[4], localScore;
		cin >> score[0] >> score[1] >> score[2] >> score[3];
		localScore = sumArray(score, 4);
		if(maxScore < localScore) {
			maxScore = localScore;
			cont = i + 1;
		}
	}
	cout << cont << " " << maxScore << endl;
	return 0;
}
