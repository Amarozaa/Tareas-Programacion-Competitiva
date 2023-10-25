//https://vjudge.net/contest/583647#problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dd;

int ways(vector<vector<char>> matriz, int n){
    const int MOD = 1e9 + 7;
    vector<vector<int>> res(n, vector<int>(n, 0)); //matriz nxn
    res[0][0] = 1;

    if (matriz[0][0] == '*') {
        res[0][0] = 0;
    } else{
        res[0][0] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (matriz[i][j] != '*'){
                if (i > 0){
                    res[i][j] = (res[i][j] + res[i-1][j]) % MOD;
                }
                if (j>0){
                    res[i][j] = (res[i][j] + res[i][j-1]) % MOD;
                }
            } 
            
        }
        
    }
    return res[n-1][n-1];
}

int main(){
    
    
  
    int n;
    cin >> n; //tamaño de la grilla!!!

    vector<vector<char>> matriz(n, vector<char>(n)); //matriz de n filas y columnas

    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            char l;
            cin >> l;
            matriz[i][j] = l;
        }
    }
    int hola;
    hola = ways(matriz,n);
    cout << hola << endl;
    return 0;
}
