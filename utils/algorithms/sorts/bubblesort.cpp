// Bubble sort

#include <iostream>
#include <vector>
using namespace std;

#define length 9

void swap(int * arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int main(void) {

	int data[length] = { 9, 7, 8, 6, 5, 3, 4, 2, 1 };

	while(true) {
		bool swappedInRun = false;
		for(int i = 0; i < length - 1; i++) {
			if(data[i] > data[i + 1]) {
				swap(data, i, i + 1);
				swappedInRun = true;
			}
		}
		if(!swappedInRun) 
			break;
	}

	for(int i : data) cout << i << " ";
	cout << endl;

	return 0;
}