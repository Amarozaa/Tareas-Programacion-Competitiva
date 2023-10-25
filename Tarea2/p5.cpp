//https://vjudge.net/contest/578793#problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dd;


bool esValida(dd d, dd n, dd m, vector<int> trees){
    //devolver True si d es una distancia esValida
    int routers = 1;
    dd ultimo = trees[0]+d; 
    for(int i=0;i<m;i++){
        if (abs(ultimo-trees[i])>d){
            routers++;
            ultimo = trees[i] + d;

        }
        
    }
    return routers <= n;
 
}
int main(){
    
    int c;
    cin >> c; //casos de prueba
    for(int i=0;i<c;i++){
        //para cada caso de prueba
        int n, m;
        cin >> n; //cantidad de routers
        cin >> m; //cantidad de arboles
        vector<int> trees(m);
        for(int i=0;i<m;i++){
            int g;
            cin >> g;
            trees[i] = g;
        }
        sort(trees.begin(), trees.end());
        dd ans = 0;
        dd l = 0;
        dd r = trees[m-1];
        dd epsilon = 1e-9;
        while((r-l) > epsilon){
            dd mid = (l+r)/2;
            
            if (esValida(mid,n,m,trees)){
                r = mid;
            }
            else{
                l = mid;
            }
            
            
        }
        //cout <<fixed(1);
        //cout << ans;
        
        
        
        cout << fixed << setprecision(1) << r << endl;
        
    }
 
    
    
    return 0;
    
}
