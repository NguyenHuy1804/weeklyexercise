#include <iostream>

using namespace std;

// Lỗi 1: Con trỏ chưa khởi tạo
void uninitialized_pointer() {
    int *ptr; // Chưa khởi tạo, chứa địa chỉ rác
    cout << "Uninitialized pointer value: " << *ptr << endl; // Lỗi: truy cập vùng nhớ không hợp lệ
}

// Lỗi 2: Truy cập con trỏ NULL
void null_pointer() {
    int *ptr = nullptr;
    cout << "Null pointer value: " << *ptr << endl; // Lỗi: dereferencing NULL
}

// Lỗi 3: Dangling Pointer (Trỏ đến vùng nhớ không còn hợp lệ)
void dangling_pointer() {
    int *ptr;
    {
        int temp = 10;
        ptr = &temp;
    } // temp bị hủy ở đây
    cout << "Dangling pointer value: " << *ptr << endl; // Lỗi: truy cập vùng nhớ đã bị giải phóng
}

// Lỗi 4: Mất vùng nhớ (Memory Leak)
void memory_leak() {
    int *ptr = new int(5);
    ptr = new int(10); // Lỗi: vùng nhớ đầu tiên bị mất
    cout << "Memory leak value: " << *ptr << endl;
    delete ptr; // Chỉ giải phóng vùng nhớ thứ hai
}

// Lỗi 5: Giải phóng vùng nhớ quá sớm
void premature_free() {
    int *ptr = new int(10);
    delete ptr;
    cout << "After delete: " << *ptr << endl; // Lỗi: truy cập vùng nhớ đã giải phóng
}

// Lỗi 6: Lỗi với hằng con trỏ
void const_pointer_errors() {
    int a = 20, b = 25, c = 30;
    const int* pA = &a;  // Không thể thay đổi giá trị *pA
    int* const pB = &b;  // Không thể thay đổi địa chỉ pB
    const int* const pC = &c; // Không thể thay đổi cả *pC và địa chỉ pC

    // *pA += 1; // Lỗi: không thể thay đổi giá trị của hằng số
    // pB = &a;  // Lỗi: không thể thay đổi địa chỉ của hằng con trỏ
    // *pC += 1; // Lỗi: không thể thay đổi giá trị của hằng số
    // pC = &b;  // Lỗi: không thể thay đổi địa chỉ của hằng con trỏ

    cout << "Const pointer errors demonstrated." << endl;
}

int main() {
    // Gọi các hàm lỗi (hãy chạy từng cái một để tránh crash chương trình)
    // uninitialized_pointer();
    // null_pointer();
    // dangling_pointer();
    // memory_leak();
    // premature_free();
    // const_pointer_errors();

    return 0;
}