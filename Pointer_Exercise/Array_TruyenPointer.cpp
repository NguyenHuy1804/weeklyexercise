#include <iostream>

using namespace std;

// Hàm nhận mảng không xác định kích thước
void function1(int arr[]) {
    cout << "Inside function1: sizeof(arr) = " << sizeof(arr) << " bytes" << endl;
}

// Hàm nhận mảng có kích thước cố định
void function2(int arr[10]) {
    cout << "Inside function2: sizeof(arr) = " << sizeof(arr) << " bytes" << endl;
}

// Hàm nhận con trỏ
void function3(int *arr) {
    cout << "Inside function3: sizeof(arr) = " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int A[10];

    cout << "Outside function: sizeof(A) = " << sizeof(A) << " bytes" << endl;

    function1(A);        // 8 bytes
    function2(A);        // 8 bytes
    function3(A);        // 8 bytes

    return 0;
}

// Khi truyền vào, con trỏ trỏ tới phần tử đầu tiên nên chỉ còn 8 bytes