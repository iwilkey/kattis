#include <iostream>
using namespace std;
int main(void) {
	int cases; cin >> cases;
	cin.ignore();
	int level = 7;
	while(cases != 0) {
		static string in;
		getline(cin, in);
		if(in[in.size() - 2] == 'p') {
			if(level + 1 <= 10) level++;
		} else if(level - 1 >= 0) level--;
		cases--;
	}
	cout << level << endl;
	return 0;
}
