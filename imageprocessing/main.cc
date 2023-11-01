/**
* Solving: https://open.kattis.com/problems/imageprocessing
* @author Ian Wilkey (iwilkey)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int ih, iw, kh, kw;
    cin >> ih >> iw >> kh >> kw;
    int oh = ih - kh + 1;
    int ow = iw - kw + 1;
    vector<vector<int>> image(ih, vector<int>(iw));
    vector<vector<int>> kern(kh, vector<int>(kw));
    vector<vector<int>> output(oh, vector<int>(ow));
    for(int i = 0; i < ih; i++) 
        for(int j = 0; j < iw; j++)
            cin >> image[i][j];
    for(int i = 0; i < kh; i++)
        for(int j = 0; j < kw; j++) 
            cin >> kern[kh - i - 1][kw - j - 1];
    for(int i = 0; i <= ih - kh; i++)
        for(int j = 0; j <= iw - kw; j++) {
            int sum = 0;
            for(int ki = 0; ki < kh; ki++)
                for(int kj = 0; kj < kw; kj++)
                    sum += image[i + ki][j + kj] * kern[ki][kj];
            output[i][j] = sum;
        }
    for(int i = 0; i < oh; i++) {
        for(int j = 0; j < ow; j++) {
            if (j > 0) cout << " ";
            cout << output[i][j];
        }
        cout << endl;
    }
    return 0;
}
