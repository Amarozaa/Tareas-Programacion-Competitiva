//https://vjudge.net/contest/576664#problem/D
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int x;
    cin >> n >> x; //cantidad del array y numero que queremos owo
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(A.begin(), A.end());
    int i = 0;
    int j = n - 1;
    int k = -1; 
    int l = -1; 
    while (i < j) {
        if (A[i] + A[j] == x) {
            k = A[i];
            l = A[j];
            break;
        }
        if (A[i] + A[j] < x) {
            i++;
        }
        if (A[i] + A[j] > x) {
            j--;
        }
    }

    int i1 = -1; 
    int i2 = -1; 
    if (k != -1 && l != -1) { 
        for (int i = 0; i < n; i++) {
            if (k == B[i]) {
                i1 = i + 1;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (l == B[i] && i != i1 - 1) { // aseguramos q l no tiene la misma posicion que k
                i2 = i + 1;
                break;
            }
        }
    }

    if (i1 == -1 || i2 == -1) { 
        cout << "IMPOSSIBLE";
    } else {
        if (i1 > i2){
            cout << i2 << " " << i1;
        }
        else{
            cout << i1 << " " << i2;
            
        }

    }

    return 0;
}
