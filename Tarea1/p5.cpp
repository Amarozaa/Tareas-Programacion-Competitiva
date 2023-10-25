//https://vjudge.net/contest/576664#problem/E
#include <iostream>
#include <set>


using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int x;
    cin >> x; //largo calle
    int n;
    cin >> n; // cant semaforos
    
    
    set<int> posiciones; //POSICIONES DE LOS SEMAFAROS
    multiset<int> espacios; //espacios
    posiciones.insert(0);
    posiciones.insert(x);
    espacios.insert(x);
    for(int i=0; i<n; i++){
        int a;
        cin >>a;
        auto b = posiciones.upper_bound(a); //semaforo siguiente
        auto c = b; //semaforo previo
        c--;
        int v1 = *b; //accedemos al valor del puntero
        int v2 = *c; 
        int espacio = v1-v2;
        espacios.erase(espacios.find(espacio));
        
        int new_espacio1 = v1-a;
        int new_espacio2 = a-v2;
        
        espacios.insert(new_espacio1);
        espacios.insert(new_espacio2);
        posiciones.insert(a);
    
        cout << *(--espacios.end()) << " ";
        
        
    }
    
    


    return 0;
}
