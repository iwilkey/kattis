#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(string line) {
    vector<string> ret;
    stringstream check(line);
    string imme;
    while(getline(check, imme, ' '))
        ret.push_back(imme);
    return ret;
}

int main(void) {

    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(3);

    vector<float> numbers;
    vector<string> words;
    while(!cin.eof()) {
        numbers.clear();
        words.clear();
        
        string line;
        getline(cin, line);
        vector<string> tokens = split(line);
        for(string w : tokens) {
            try {
                float num = stof(w);
                numbers.push_back(num);
            } catch(exception e) {
                words.push_back(w);
            }
        }

        float avg = 0.0f;
        for(float n : numbers) avg += n;
        avg /= numbers.size();

        cout << avg << " ";
        int c = 0;
        for(string s : words) {
            cout << s;
            if(c != words.size() - 1) cout << " ";
            c++;
        }
        cout << endl;
    }

    return 0;
}
