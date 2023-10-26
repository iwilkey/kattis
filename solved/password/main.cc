#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void) {
    // use a high floating point precision for the number crunching.
    cout << setprecision(12);
    int p;
    cin >> p;
    vector<double> prs;
    for(int i = 0; i < p; i++) {
        string pi;
        double pr;
        cin >> pi >> pr;
        prs.push_back(pr);
    }
    sort(prs.begin(), prs.end());
    double ans = 0.0f;
    for(int i = p - 1; i >= 0; i--) 
        ans += prs[i] * (p - i);
    // you can set it lower for printing; everything has already been rounded.
    cout << setprecision(7) << ans << endl;
    return 0;
}
