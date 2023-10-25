//https://vjudge.net/contest/583647#problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n, x;
    cin >> n >> x; //num miradores y max num de metros
    vector<int> A(n);
    vector<int> dp(n, 1);
    for(int i=0; i<n; i++){
        int a;
        cin >> a; //Ai =< Ai+1 (tan ordenados)
        A[i] = a;
    }
    int max = 1;
    for(int i=0; i<n-1; i++){ 
        if (A[i+1] - A[i] <= x){ 
            max = dp[i] + 1;
        }else{
            max = 1;
        }
        dp[i+1] = max;
    }
    int max2 = 0;
    for(int i=0;i<n;i++){
        if(dp[i] > max2){
            max2 = dp[i];
        }
    }
    cout << max2 << endl;
    return 0;
}
