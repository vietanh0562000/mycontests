#include <bits/stdc++.h>
using namespace std;
const int oo = 1e9+7;
int m, n, d, r, high;
int A[505][505], F[505][505];
int main(){
    cin >> m >> n;
    cin >> d >> r >> high;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> A[i][j];
            A[i][j] = abs(A[i][j] - high);
            F[i][j] = A[i][j] + F[i-1][j] + F[i][j-1] - F[i-1][j-1];
        }
    }
    
    int res = oo;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (i >= d && j >= r){
                int sum = F[i][j] - F[i-d][j] - F[i][j-r] + F[i-d][j-r];
                res = min(res, sum);
            }
    cout << res;
}