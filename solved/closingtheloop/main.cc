#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int c; cin >> c;
    for(int i = 1; i <= c; i++) {
        static int segs;
        cin >> segs;
        vector<int> redBucket, blueBucket;
        for(int j = 0; j < segs; j++) {
            static string seg;
            cin >> seg;
            if(seg[seg.size() - 1] == 'R') 
                redBucket.push_back(stoi(seg.substr(0, seg.size() - 1)));
            if(seg[seg.size() - 1] == 'B') 
                blueBucket.push_back(stoi(seg.substr(0, seg.size() - 1)));
        }
        sort(redBucket.begin(), redBucket.end());
        sort(blueBucket.begin(), blueBucket.end());
        reverse(redBucket.begin(), redBucket.end());
        reverse(blueBucket.begin(), blueBucket.end());
        int length = 0, ties = min(redBucket.size(), blueBucket.size());
        bool blue = false;
        for(int j = 0; j < ties * 2; j++) {
            if(blue) {
                length += blueBucket[0] - 1;
                blueBucket.erase(blueBucket.begin());
            } else {
                length += redBucket[0] - 1;
                redBucket.erase(redBucket.begin());
            }
            blue = !blue;
        }
        cout << "Case #" << i << ": " << length << endl;
    }
    return 0;
}
