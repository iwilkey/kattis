// Accepted

#include <iostream>
using namespace std;

void swap(string & in, int ind1, int ind2) {
	char temp = in[ind1];
	in[ind1] = in[ind2];
	in[ind2] = temp;
}

int main() {
	string num1, num2;
	cin >> num1 >> num2;
	swap(num1, 0, 2);
	swap(num2, 0, 2);
	cout << max(stoi(num1), stoi(num2)) << endl;
	return 0;
}
