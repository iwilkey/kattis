// Accepted

#include <iostream>
#include <bitset>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define trav(x, y) for(int x = 0; x < y; x++)
#define travi(x, i, y) for(int x = i; x < y; x++)
template <typename T> void log(string tag, T obj) { cout << tag << " " << obj << endl; }
template <typename T> void log(T obj) { cout << obj << endl; }

int main() {
	string in, fin; getline(cin, in);
	for(int i = 0; i < in.size(); i++) {
		static int ii;
		ii = i + 1;
		while(true) {
			if(ii >= in.size() || in[i] != in[ii]) {
				i = ii - 1;
				break;
			}
			ii++;
		}
		fin += in[i];
	}
	cout << fin << endl;
	return 0;
}
