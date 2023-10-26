#include <iostream>
#include <math.h>

int main(void) {
    int r; std::cin >> r;
    for(int xx = 1; xx <= r; xx++) {
        for(int yy = 1; yy <= r; yy++) {
            long double dis = powl((powl(xx, 2) + powl(yy, 2)), 0.5f);
            if(dis > r) {
                std::cout << xx << " " << yy << std::endl;
                return 0;
            }
        }
    }
    return 0;
}
