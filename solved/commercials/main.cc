#include <iostream>
using namespace std;

int main(void) {
    // Max subarray problem. Apply Kadane's algorithm, which finds the max subarray in O(n) time.
    /**
     * 
     * function maxProfit(n, cost, students):
            maxSoFar = 0
            maxEndingHere = 0
            for i from 1 to n:
                // adjust the students count by the cost of the commercial
                adjustedProfit = students[i] - cost
                // accumulate the sum of adjusted profits
                maxEndingHere += adjustedProfit
                // if the current partial sum is negative, reset it
                if maxEndingHere < 0:
                    maxEndingHere = 0
                // update the maximum sum so far
                if maxSoFar < maxEndingHere:
                    maxSoFar = maxEndingHere

            return maxSoFar
     */
    int b, p;
    cin >> b >> p;
    int msf = 0;
    int meh = 0;
    for(int i = 0; i < b; i++) {
        static int n;
        cin >> n;
        int ap = n - p;
        // accum the sum of profits.
        meh += ap;
        // If the ending amount is now negative, then we're better off not choosing this subarray anymore.
        if(meh < 0)
            meh = 0;
        // Update max so far. This will keep track of the subarray that has given the max value as we traverse.
        if(msf < meh)
            msf = meh;
    }
    cout << msf << endl;
    return 0;
}
