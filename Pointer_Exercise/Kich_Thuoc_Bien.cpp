#include <iostream>
using namespace std;
int main(){
    // kiểu int
    int a1[4] = {1,2,3,4};
    for(int *cp = a1; cp < a1 + 4; cp++){
        cout << (void*)cp << " " << *cp << endl;
    }
    cout << endl;
    // kiểu double
    double a2[4] = {0.5, 0.6, 2.1, 2.7};
    for(double *dp = a2; dp < a2 + 4; dp++){
        cout << (void*)dp << " " << *dp << endl;
    }
    cout << endl;
    //chuyện gì xảy ra nếu thay cp++ = cp+=2
    for(int *cp = a1; cp < a1 + 4; cp+=2){
        cout << (void*)cp << " " << *cp << endl;
    }
    // con trỏ bị nhảy 2 giá trị
}
