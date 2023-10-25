//https://vjudge.net/contest/578793#problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dd;

bool check(int n, ll k, ll mid, vector<ll> X){
    ll sum = 0;
    ll bandera = 0;
    for(int i=0; i<n; i++){
        if (X[i] > mid){
            return false;
        }
        sum += X[i];
        if (sum > mid){
            bandera++;
            sum = X[i];
        }
    }
    bandera++;
    return bandera <= k;
}

int main(){
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> X(n);
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        X[i] = x;
    }
    ll ans = 0;
    ll l = 1;
    ll r = 2e15;
 
    while (l <= r){
        ll mid = l + (r - l) / 2;
        if (check(n, k, mid, X)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}

