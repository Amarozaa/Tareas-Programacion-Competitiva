
//https://vjudge.net/contest/583647#problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<ll> d(3);
    vector<ll> dp(n+1, -1);
    d[0] = a;
    d[1] = b;
    d[2] = c;
    dp[0] = 0;
    
    for(int i=0; i<=n;i++){
        for(int j=0; j<3;j++){
            if(i-d[j] >= 0){
                if(dp[i-d[j]] != -1){
                dp[i] = max(dp[i],dp[i-d[j]]+1);
                }
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}
