#include <bits/stdc++.h>
using namespace std;
int souoc(int x){
    int count = 0;
    for (int i = 1; i * i <= x; i++){
        if (i*i == x) count++;
        else
            if (x % i == 0) count += 2;
    }
    return count;
}
int main(){
    int k, n, res = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        if (souoc(i) == k){
            //cout << i <<'\n';
            res++;
        }
    }
    cout << res;
}