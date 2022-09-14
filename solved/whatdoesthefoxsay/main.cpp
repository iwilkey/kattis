// Accepted

#include <iostream>
#include <bitset>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define trav(x, y) for(int x = 0; x < y; x++)
#define travi(x, i, y) for(int x = i; x < y; x++)
template <typename T> void log(string tag, T obj) { cout << tag << " " << obj << endl; }

void initIO(int precision) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(precision);
    return;
}

struct sound {
	string classification,
		sound;
};

vector<string> tokenize(string line) {
	vector<string> ret;
	stringstream check(line);
	string imme;
	while(getline(check, imme, ' ')) 
		ret.push_back(imme);
	return ret;
}

string cat(vector<string> &tokens, int start, int end) {
	string ret = "";
	for(int i = start; i <= end; i++)
		ret += (tokens[i] + " ");
	return ret;
}

// Return the index of the tokenized string where goes is placed.
int goes(vector<string> &tokens) {
	for(int i = 0; i < tokens.size(); i++)
		if(tokens[i] == "goes") return i;
	return -1;
}

bool wordIn(vector<sound> sounds, string sound) {
	for(int i = 0; i < sounds.size(); i++) {
		static vector<string> soundTokens;
		soundTokens = tokenize(sounds[i].sound);
		for(int j = 0; j < soundTokens.size(); j++) {
			if(soundTokens[j] == sound) return true;
		}
	}
	return false;
}

void processCase() {
	string line, recording = "";
	bool runs = false;
	vector<sound> sounds;
	while(getline(cin, line)) {
		if(line == "what does the fox say?") break;
		if(!runs) {
			recording = line;
			runs = true;
			continue;
		}
		static vector<string> information;
		information = tokenize(line);
		int go = goes(information);
		static sound s;
		s.classification = cat(information, 0, go - 1);
		s.sound = cat(information, go + 1, information.size() - 1);
		sounds.push_back(s);
	}

	string fox = "";
	vector<string> record = tokenize(recording);
	for(int i = 0; i < record.size(); i++)
		if(!wordIn(sounds, record[i])) fox += (record[i] + " ");
	cout << fox << endl;

	return;
}

void solve() {
	int cases; cin >> cases;
	cin.ignore();
	for(int i = 0; i < cases; i++)
		processCase();
	return;	
}

int main() {
	initIO(1);
	solve();
	return 0;
}
