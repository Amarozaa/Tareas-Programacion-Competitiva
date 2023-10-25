#include <string>
using namespace std;
#include <iostream>
#include <cctype>
#include <vector>
//https://vjudge.net/contest/573906#problem/B




int main() {
    
    int grillas;
    vector<string> PALABRAS(8);
    cin >> grillas;
    

    //NUMERO DE GRILLAS 8X8
    for (int i = 1; i <= grillas; i++){
        
        for (int j = 1; j <= 8; j++){
            cin >> PALABRAS[j-1];
            
}
        for(int k = 0; k < 8; k++){ //revisamos una columna
            string OUTPUT;
            for(int l = 0; l < 8; l++){ //revisamos filas de la columna
                if (isalpha(PALABRAS[l][k])){
                    OUTPUT += PALABRAS[l][k];
                }
            }
            //REVISAMOS LAS COSAS VACIAS Y LAS SACAMOS
            if(OUTPUT != ""){
                
                cout << OUTPUT << endl;
            }
            
            
            
        }
        
            
        }

   

    

    
return 0;
}
