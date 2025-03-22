#include <iostream>

using namespace std;

// Hàm tìm kiếm nhị phân sử dụng con trỏ
int binary_search(int* arr, int size, int target) {
    int* left = arr;
    int* right = arr + size - 1;

    while (left <= right) {
        int* mid = left + (right - left) / 2;

        if (*mid == target)
            return mid - arr; // Trả về chỉ số
        else if (*mid < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Không tìm thấy
}

int main() {
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(A) / sizeof(A[0]);

    int target = 7;
    int index = binary_search(A, size, target);

    if (index != -1)
        cout << "Found " << target << " at index " << index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
