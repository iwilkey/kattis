#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursively find consecutive cards and set them to zero.
void fcc(vector<int> & cards, int ind) {
    if(ind == cards.size() - 1 && 
        cards[ind - 1] == cards[ind] - 1) {
        cards[ind] = 0;
        return;
    }
    if(cards[ind + 1] == cards[ind] + 1)
        fcc(cards, ind + 1);
    cards[ind] = 0;
}

int main(void) {
    int c; cin >> c;
    vector<int> cards(c, 0);
    for(int i = 0; i < c; i++) 
        cin >> cards[i];

    sort(cards.begin(), cards.end());
    for(int i = 0; i < cards.size() - 1; i++)
        if(cards[i + 1] == cards[i] + 1) fcc(cards, i + 1);

    int sum = 0;
    for(int i = 0; i < cards.size(); i++)
        sum += cards[i];

    cout << sum << endl;
    return 0;
}
