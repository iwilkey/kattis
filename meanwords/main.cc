/**
* Solving: https://open.kattis.com/problems/meanwords
* @author Ian Wilkey (iwilkey)
*/

#include <iostream>
#include <vector>
using namespace std;

/**
* Time complexity: O(w * ml), where ml is the length of the longest word.
*/
int main(void) {
    int w;
    cin >> w;
    vector<string> words(w);
    int ml = 0;
    for(int i = 0; i < w; i++) {
        cin >> words[i];
        if(words[i].size() > ml)
            ml = words[i].size();
    }
    vector<int> amt(ml, 0);
    vector<int> sum(ml, 0);
    for(int i = 0; i < w; i++) {
        for(int k = 0; k < words[i].size(); k++) 
            amt[k]++;
        for(int j = 0; j < words[i].size(); j++)
            sum[j] += (int)words[i][j];
    }
    for(int i = 0; i < ml; i++) {
        int c = sum[i] / amt[i];
        cout << (char)c;
    }
    cout << endl;
    return 0;
}
