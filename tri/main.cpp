#include <iostream>
using namespace std;

int main(void) {

    int nums[3];
    for(int i = 0; i < 3; i++)
        cin >> nums[i];
    for(int i = 0; i < 2; i++) {
        int op1, op2, ans;
        if(!i) {
            op1 = nums[0];
            op2 = nums[1];
            ans = nums[2];
        } else {
            ans = nums[0];
            op1 = nums[1];
            op2 = nums[2];
        }
        for(int a = 0; a < 4; a++) {
            switch(a) {
                case 0:
                    if(op1 + op2 == ans) {
                        if(!i) cout << op1 << "+" << op2 << "=" << ans << endl;
                        else cout << ans << "=" << op1 << "+" << op2 << endl;
                        return 0;    
                    }
                    break;
                case 1:
                    if(op1 - op2 == ans) {
                        if(!i) cout << op1 << "-" << op2 << "=" << ans << endl;
                        else cout << ans << "=" << op1 << "-" << op2 << endl;
                        return 0;    
                    }
                    break;
                case 2:
                    if(op1 * op2 == ans) {
                        if(!i) cout << op1 << "*" << op2 << "=" << ans << endl;
                        else cout << ans << "=" << op1 << "*" << op2 << endl;
                        return 0;    
                    }
                    break;
                case 3:
                    if(op1 / op2 == ans) {
                        if(!i) cout << op1 << "/" << op2 << "=" << ans << endl;
                        else cout << ans << "=" << op1 << "/" << op2 << endl;
                        return 0;    
                    }
                    break;
            }
        }
    }
    return 0;
}