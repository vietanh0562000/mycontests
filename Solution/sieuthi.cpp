#include <bits/stdc++.h>
using namespace std;
int n, k, A[1005];
int main(){
    int sum = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i ++){
        cin >> A[i];
        sum += A[i];
    }
    sort(A + 1, A + n + 1);
    while (n >= k){
        sum -= A[n-k+1];
        n = n - k;
    }
    cout << sum;
}