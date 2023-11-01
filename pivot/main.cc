#include <iostream>
#include <vector>
using namespace std;

/**
 * O(n) solution...
 */
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> mir(n); // min right array...
    vector<int> mxl(n); // max left array...
    mxl[0] = arr[0];
    for(int i = 1; i < n; i++)
        mxl[i] = max(mxl[i - 1], arr[i]);
    mir[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
        mir[i] = min(mir[i + 1], arr[i]);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            if(arr[i] <= mir[i + 1])
                ans++;
        } else if(i == n - 1) {
            if(mxl[i - 1] <= arr[i])
                ans++;
        } else {
            if((mxl[i - 1] <= arr[i]) && (arr[i] <= mir[i + 1]))
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

/**
 * O(n^2) solution...
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int targ = arr[i];
        // check right
        for(int j = i + 1; j < n; j++)
            if(arr[j] <= targ)
                goto next;
        // check left
        for(int j = i - 1; j >= 0; j--)
            if(arr[j] > targ)
                goto next;
        ans++;
        next:;
    }
    cout << ans << endl;
    return 0;
}
*/
