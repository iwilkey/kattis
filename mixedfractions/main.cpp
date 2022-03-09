#include <iostream>
using namespace std;

int main() {
	while(true) {
		static unsigned int in[2];
		cin >> in[0] >> in[1];
		if(!in[0] && !in[1]) break;
		cout << in[0] / in[1] << " ";
		cout << in[0] % in[1] << " / " << in[1] << endl;
	}
	return 0;
}