#include <iostream>
using namespace std;

void result(int a[], int n, int k){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == k){
                cout << a[i] << " " << a[j];
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    int a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    result(a,n,k);
}