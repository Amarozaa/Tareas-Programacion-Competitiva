#include <iostream>
//https://vjudge.net/contest/573906#problem
using namespace std;

int main()
{
    int numero;
    cin >> numero;
    
    if (numero == 2){
        cout << "NO";
    }
    else{
        //es par
        if (numero%2 == 0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    

    return 0;
}
