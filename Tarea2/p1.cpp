//https://vjudge.net/contest/578793#problem  
#include <bits/stdc++.h>
using namespace std;

bool f_aux(long long n, long long t, long long c, long long A[]) { // número de máquinas, paquetes, cosos de máquinas
    // tiempo medio si se generan o no los t paquetes
    long long bandera = 0;
    for(int i = 0; i < n; i++) {
        bandera +=c/A[i];
        if (bandera >= t) {
        return true;
    }
    }
  
    return false;

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n;
     // número de máquinas
    long long t;
    cin >> n;
    cin >> t; // paquetes que te piden
    long long A[n]; // array con cositos de máquinas
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    long long l = 0, r = 1e18, bandera_f = 0; // derecha tiempo máximo
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (f_aux(n, t, mid, A)) {
            bandera_f = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << bandera_f << endl;
    return 0;
}

