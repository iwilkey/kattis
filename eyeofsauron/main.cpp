#include <iostream>
using namespace std;

int main() {
	string sauron; cin >> sauron;
	int s = sauron.size(),
		f = sauron.find("()") + 1;
	if(s == f * 2) cout << "correct";
	else cout << "fix";
}
