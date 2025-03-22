#include <iostream>
#include <cstring>
using namespace std;

char* weirdString() {
    char c[] = "123345";
    return c;
}

int main() {
    char* str = weirdString();
    cout << "Ouput: " << str << endl;
    return 0;
}
// loi truy cap vung bo nho khong hop le tu mot bien cuc bool