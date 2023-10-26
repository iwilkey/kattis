#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

int main(void) {
    initIO(6);
    unordered_map<string, int> freq;
    int trees = 0;
    while(!cin.eof()) {
        static string line;
        getline(cin, line);
        trees++;
        freq[line]++;
    }
    vector<pair<string, double> > tree;
    for(auto & [key, value] : freq) 
        tree.push_back(make_pair(key, ((double)(value) / trees) * 100.0f));
    sort(tree.begin(), tree.end());
    for(pair<string, double> entry : tree)
        cout << entry.first << " " << entry.second << endl;
    return 0;
}
