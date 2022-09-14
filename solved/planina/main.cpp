/* Accepted
Using sample output...
0 - 1 square along top, 2 points along top (2^2 = 4)
1 - 2 squares along top, 3 points along top (3^2 = 9)
2 - 4 squares along top, 5 points along top (5^2 = 25)
5 - 32 squares along top, 33 points along top (33^2 = 1089)

In general, num squares: sqrt(4^iteration)
	num points: (num squares + 1)^2
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int i; cin >> i;
	long long int ans = pow(((pow(pow(4, i), 0.5f)) + 1), 2);
	cout << ans << endl;
	return 0;
}
