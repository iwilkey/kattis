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
	int h, w, n; cin >> h >> w >> n;
	int bricks[n];
	trav(nn, n) cin >> bricks[nn];

	uint8_t currH = 0, currW = 0;
	trav(brick, n) {
		if(bricks[brick] + currW > w) {
			cout << "NO" << endl;
			return 0;
		} else if(bricks[brick] + currW == w) {
			currH++;
			if(currH == h) {
				cout << "YES" << endl;
				return 0;
			}
			currW = 0;
		} else currW += bricks[brick];
	}

	return 0;
}
