#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
// So với Selection Sort và Insertion Sort
// Bubble Sort chậm hơn vì thực hiện nhiều lần hoán đổi.
//
// Selection Sort hiệu quả hơn một chút do hoán đổi ít hơn.
//
// Insertion Sort nhanh hơn khi dữ liệu đã gần sắp xếp.
