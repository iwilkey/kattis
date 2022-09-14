#include <iostream>
#include <vector>
using namespace std;

bool inScale(vector<string> & scale, string note) {
	for(int i = 0; i < scale.size(); i++)
		if(scale[i] == note) return true;
	return false;
}

int main() {
	const int msi[7] = { 2, 2, 1, 2, 2, 2, 1 };
	const string notes[12] = {
		"A", // 0 
		"A#",
		"B", // 2
		"C", // 3
		"C#", // 4
		"D", // 5
		"D#",
		"E",
		"F",
		"F#",
		"G",
		"G#" // 12 - 1 == 11
	};
	vector< vector<string> > scales;
	for(int scale = 0; scale < 12; scale++) {
		vector<string> working;
		working.push_back(notes[scale]);
		int relInd = scale;
		for(int i = 0; i < 7; i++) {
			relInd += msi[i];
			relInd %= 12;
			working.push_back(notes[relInd]);
		}
		scales.push_back(working);
	}

	// Some elimination method...
	vector<int> elimScales;
	for(int i = 0; i < scales.size(); i++) 
		elimScales.push_back(i);

	int tones; cin >> tones;
	for(int i = 0; i < tones; i++) {
		string t;
		cin >> t;
		for(int s = 0; s < 12; s++)
			if(!inScale(scales[s], t))
				elimScales[s] = -1;
	}

	bool out = false;
	for(int i = 0; i < elimScales.size(); i++) 
		if(elimScales[i] != -1) {
			cout << notes[i] << " ";
			if(!out) out = true;
		}
	if(!out) cout << "none";
	cout << endl;

	return 0;
}
