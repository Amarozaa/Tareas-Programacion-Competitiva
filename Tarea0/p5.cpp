#include <iostream>
#include <bits/stdc++.h>
#include <string>
//https://vjudge.net/contest/573906#problem/E

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int p,q;
        string s1,s2;
        cin>>p>>q>>s1>>s2;
        reverse(s2.begin(),s2.end());
        string s = s1 + s2;
        int c = 0;
        for (int i=1; i<s.size();i++){
            if (s[i] == s[i-1]) c++;

        }
        if (c <=1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    

    return 0;
}
