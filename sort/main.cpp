#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct numberData {
    int value, firstOccur, freq;
};

numberData * returnOccurance(vector<numberData> & data, int value) {
    for(numberData & d : data)
        if(d.value == value)
            return &d;
    return nullptr;
}

bool compare(const numberData & n1, const numberData & n2) {
    if(n1.freq == n2.freq) return n1.firstOccur < n2.firstOccur;
    else return n1.freq > n2.freq;
}

int main(void) {

    vector<numberData> list;
    int s, c; cin >> s >> c;
    for(int i = 0; i < s; i++) {
        static int num;
        cin >> num;
        numberData * occurance = returnOccurance(list, num);
        if(occurance != nullptr) occurance->freq++;
        else {
            numberData newD;
            newD.value = num;
            newD.firstOccur = i;
            newD.freq = 1;
            list.push_back(newD);
        }
    }

    sort(list.begin(), list.end(), compare);

    for(numberData d : list)
        for(int i = 0; i < d.freq; i++)
            cout << d.value << " ";
    cout << endl;

    return 0;
}
