#include <iostream>
using namespace std;

// 0 -> this fails order
// 1 -> this passes order
// 2 -> this char is not in the key
uint8_t inOrder(char c, string & key) {

	bool in = false;
	for(int cc = 0; cc < key.size(); cc++) {
		if(key[cc] == c) {
			in = true;
			break;
		}
	}

	if(in) {
		if(key[0] != c) return 0;
		else {
			key.erase(key.begin());
			return 1;
		}
	}

	return 2;
}

int main(void) {
	
	string key, message; 
	cin >> key >> message;

	int orders = 0, check = key.size();
	for(int c = 0; c < message.size(); c++) {
		uint8_t verdict = inOrder(message[c], key);
		if(verdict == 1) {
			orders++;
			continue;
		} else if (verdict == 0) {
			cout << "FAIL" << endl;
			return 0;
		}
	}

	if(orders == check) {
		cout << "PASS" << endl;
	} else cout << "FAIL" << endl;

	return 0;
}
