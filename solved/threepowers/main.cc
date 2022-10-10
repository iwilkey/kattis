#include <iostream>
#include <vector>
#include <math.h>
#include<stdio.h>
using namespace std;

int main(void) {
    while(true) {
        unsigned long long int in; 
        cin >> in;
        if(in == 0) break;
        in--;

        vector<long double> subset;
        unsigned long long int place = 0;
        while(in != 0) {
            if(in & 1)
                subset.push_back((long double)powl(3.0f, place));
            in >>= 1;
            place++;
        }

        cout << "{ ";
        for(int i = 0; i < subset.size(); i++) {
            printf("%0.0Lf", subset[i]);
            if(i != subset.size() - 1) cout << ", ";
            else cout << ' ';
        }
        cout << '}' << endl;
    }

    return 0;
}