//https://vjudge.net/contest/578793#problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//gasto jugando x turnos con pc sin cargar como x*a + (n-x)*b  = x(a-b)+n*b < k nos interesa.
bool f_aux(ll k, ll n, ll a, ll b, ll x){
    ll num;
    num = x*a + (n-x)*b;
    if (num<k){
        return true;
    }
    return false;
    
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//resumen: si carga > a, diego solo juega- disminuye bateria en A.
	// si carga > b, con b<a, diego juega y carga su computador- disminuye bateria en B.
	//si carga =< a y =< b , diego pierde
	
	//independiente del turno de diego la carga siempre disminuye. si se busca terminar el juego luego de c/u 
	//de los n turnos la carga de computador es mayor q 0. Se quiere jugar exactamente n turno.
	//gasto jugando x turnos con pc sin cargar como x*a + (n-x)*b  = x(a-b)+n*b < k nos interesa. 
	ll q;
	cin >> q;
	for (int i=0; i<q; i++){
	    ll k, n, a, b;
	    cin >> k; //carga inicial de computador de diego
	    cin >> n; // numero de turnos en el juego.
	    cin >> a;
	    cin >> b;
	    
	    ll l = 0;
	    ll r = n;
	    ll mid;
	    if (n*b >= k){ //imposible!
	        cout << -1 << endl; 
	    }else{
	        while (l < r) {
	            
	            
                mid = (l + r + 1) / 2; 
                if (f_aux(k, n, a, b, mid)) {
                    
                    l = mid;
                } else {
                    r = mid - 1;
    }
}
	    cout << l  << endl;
 
	}
	}

	return 0;
} 
