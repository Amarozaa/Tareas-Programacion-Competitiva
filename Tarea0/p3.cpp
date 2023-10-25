#include <string>
using namespace std;
#include <iostream>
using namespace std;
//https://vjudge.net/contest/573906#problem/C


int main() {
    
    int contador = 0;
    string unaCadena;
    
    cin >> unaCadena;
    
    char bandera = 'a';
    
    //aba
    //abc
    //abacaba
    //acabaca
    //accca
    
    for (int i = 0; i < unaCadena.size(); i++){
        
        
        //b > a, por ej (ab)
         if ((unaCadena[i] > bandera)&&(unaCadena[i]-bandera == 1)){
            contador = contador + 1;
            
            
            bandera = unaCadena[i];
            
            
            
            
            
            
        }
        if ((unaCadena[i]-bandera)>0){
            cout << "NO";
            return 0;
        }
        
        
        if (i == 0){
            if (unaCadena[i] != 'a'){
                cout << "NO";
                return 0;
            }
        }
        
        
       
        
        
        
   
}
cout << "YES";
}
