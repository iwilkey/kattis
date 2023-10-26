#include <iostream>
#include <vector>
using namespace std;

void npickrcombRecr(vector<int>, int, int, vector<int>, int, 
    vector<vector<int>> &);

vector<vector<int>> npickrcomb(vector<int> arr, int r) {
    vector<vector<int>> ret;
    vector<int> data(r, 0);
    npickrcombRecr(arr, r, 0, data, 0, ret);
    return ret;
}

void npickrcombRecr(vector<int> arr, int r, int index, 
    vector<int> data, int i, vector<vector<int>> & combinations) {
    if(index == r) {
        combinations.push_back(data);
        return;
    }
    if(i >= arr.size()) return;
    data[index] = arr[i];
    npickrcombRecr(arr, r, index + 1, data, i + 1, combinations);
    npickrcombRecr(arr, r, index, data, i + 1, combinations);
}

int main(void) {

    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed, ios::floatfield);
    cout.precision(0);

    vector<int> vals;    
    for(int i = 0; i < 10; i++) {
        static int in;
        cin >> in;
        vals.push_back(in);
    }
    int p; cin >> p;
    vector<int> nonZero;
    for(int i = 0; i < 10; i++) 
        if(vals[i] != 0) 
            nonZero.push_back(i);
    
    vector<vector<int>> combo = npickrcomb(nonZero, p);

    long double sum = 0;
    for(vector<int> l : combo) {
        long double start = vals[l[0]];
        for(int i = 1; i < l.size(); i++) 
            start *= vals[l[i]];
        sum += start;
    }

    cout << sum << endl;

    return 0;
}
