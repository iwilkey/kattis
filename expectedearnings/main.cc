/**
 * Solving: https://open.kattis.com/problems/expectedearnings
 * @author Ian Wilkey (iwilkey)
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Time complexity: O(1).
 */
int main(void) {
    cout << setprecision(10);
    int n, k;
    double p;
    cin >> n >> k >> p;
    double ev = (n * p) - k;
    if(ev >= 0) cout << "spela inte!" << endl;
    else cout << "spela" << endl;
    return 0;
}
