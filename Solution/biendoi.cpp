#include <bits/stdc++.h>
using namespace std;
const int oo = 1e9+7;
int n;
string S[105];
string sample;

bool haveChar(int pos){
    for (int i = 1; i <= n; i++)
        if (S[i][pos] == sample[pos]) return 1;
    return 0;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> S[i];
    cin >> sample;
    
    int d = S[1].length();
    int res = oo;
    int steps = 0;
    bool success = false;
    for (int i = 1; i <= n; i++){
        steps = 0;
        success = true;
        for (int j = 0; j < d; j++)
            if (S[i][j] != sample[j]){
                if (haveChar(j)) steps++;
                else{
                    cout << "test";
                    success = false;
                    break;
                }
            }
        if (success){
            res = min(res, steps);
            
        }
    }
    cout << res;
}