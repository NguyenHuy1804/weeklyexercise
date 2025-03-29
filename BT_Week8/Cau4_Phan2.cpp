#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int k, int left, int right) {
    if(left == right) {
        if(a[left]==k) {
            return left;
        } else {
            return -1;
        }
    }
    else {
        int mid = (right+left)/2;
        if(a[mid] == k) {
            return mid;
        } else {
            if(a[mid] < k) {
                return binarySearch (a,n,k, mid + 1, right);
            } else {
                return binarySearch (a,n,k, left, mid - 1);
            }
        }
    }
}
int main() {
    int a[100];
    int n, k;
    cin >> n;

    int i = 0;
    while(i != n) {
        cin >> a[i];
        i++;
    }
    cin >> k;

    int res = binarySearch(a,n,k,0,n-1);

    cout << res;
}