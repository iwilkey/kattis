#include <iostream>
using namespace std;

template <typename T> 
void log(string tag, T obj) { 
    cout << tag << ": " << obj << endl; 
}

int main(void) {

    string game;
    getline(cin, game);
    int score[2] = { 0, 0 };
    bool tied = false;
    for(int c = 0; c <= game.size() - 2; c += 2) {
        static string basket;
        basket = game.substr(c, 2);
        if(basket[0] == 'A') score[0] += (int)(basket[1] - '0');
        else score[1] += (int)(basket[1] - '0');

        if(score[0] == 10 && score[1] == 10) 
            tied = true;

        if(tied) {
            if(score[0] >= score[1] + 2) {
                cout << "A" << endl;
                return 0;
            } else if(score[1] >= score[0] + 2) {
                cout << "B" << endl;
                return 0;
            }
        } else {
            if(score[0] >= 11) cout << "A" << endl;
            else if(score[1] >= 11) cout << "B" << endl; 
        }

    }

    return 0;
}
