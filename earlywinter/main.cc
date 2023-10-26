#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        static int in;
        cin >> in;
        if(in <= m) {
            printf("It hadn't snowed this early in %u years!\n", i);
            return 0;
        }
    }
    printf("It had never snowed this early!\n");
    return 0;
}
