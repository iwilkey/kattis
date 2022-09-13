#include <iostream>
#include <climits>
using namespace std;

int main(void) {

    int prices[3]; 
    cin >> prices[0] >> prices[1] >> prices[2];
    int min = INT_MAX, max = 0;
    pair<int, int> times[3];
    for(int i = 0; i < 3; i++) {
        static int start, end;
        cin >> start >> end;
        if(start < min) min = start;
        if(end > max) max = end;
        times[i] = make_pair(start, end);
    }

    int price = 0;
    for(int t = min; t <= max; t++) {
        int parked = 0;
        for(int i = 0; i < 3; i++)
            if(times[i].first <= t && times[i].second > t)
                parked++;
        price += prices[parked - 1] * parked;
    }
    cout << price << endl;

    return 0;
}
