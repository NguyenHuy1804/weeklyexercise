#include <iostream>
using namespace std;

int SumOfAdjacent(int a[100][100], int m, int n, int x, int y){

    int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[] = { 0, 0, -1, 1, -1, 1, -1, 1};

    int sum = 0;
    int nx, ny;
    for(int i = 0; i < 8; i++){
        nx = x + dx[i];
        ny = y + dy[i];
// lên, xuống, trái, phải, chéo trên phải, chéo trên trái, chéo dưới phải, chéo trên phải
        if(nx >= 0 && nx < m && ny >= 0 && ny < n){
            sum += a[nx][ny];
        }
    }
    return sum;
}
int main(){
    int m,n,k,q;
    cin >> m >> n >> k >> q;
    int a[100][100] = {0};

    // các ô gán giá trị
    int xk, yk, vk;
   for(int i = 0; i < k; i++){
        cin >> xk >> yk >> vk;
        a[xk][yk] = vk;
   }
   // tổng các ô xung quanh
   for(int i = 0; i < q; i++){
       int xq, yq;
       cin >> xq >> yq;
       cout << SumOfAdjacent (a, m, n, xq, yq) << endl;
   }
    return 0;
}


