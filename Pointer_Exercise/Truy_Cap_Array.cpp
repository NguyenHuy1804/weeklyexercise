#include <iostream>

using namespace std;

// Hàm đếm số số chẵn trong một mảng
int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Khởi tạo mảng
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Gọi count_even cho 5 phần tử đầu tiên
    cout << count_even(A, 5) << endl;

    // Gọi count_even cho 5 phần tử cuối cùng
    cout << count_even(A + 5, 5) << endl;

    return 0;
}
