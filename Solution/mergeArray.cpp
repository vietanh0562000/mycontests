#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    int A[100], B[100];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> A[i];
    for (int j = 1; j <= m; j++) cin >> B[j];
    
    int posA = 1, posB = 1;
    int cnum = 0, C[200];
    while (posA <= n && posB <= m){
        if (A[posA] < B[posB]){
            cnum++;
            C[cnum] = A[posA];
            posA++;
        }else{
            cnum++;
            C[cnum] = B[posB];
            posB++;
        }
    }
    while (posA <= n){
        cnum++;
        C[cnum] = A[posA];
        posA++;
    }
    while (posB <= m){
        cnum++;
        C[cnum] = B[posB];
        posB++;
    }
    
    for (int i = 1; i <= cnum; i++) cout << C[i] <<" ";
}