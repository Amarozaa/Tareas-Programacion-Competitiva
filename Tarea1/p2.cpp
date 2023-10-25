//https://vjudge.net/contest/576664#problem/B


#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    long long int ans = 0;
    
    for (int i =0; i < t; i++){
        long long int n;
        cin >> n;
        ans = 0;
        priority_queue<int> pq;
        for (int i =0; i<n; i++){
            long long int s;
            cin >> s;
            if (s == 0){
                if (!pq.empty()){
                    int max = pq.top();
                    pq.pop();
                    ans = ans + max;
                    
                }
                
                
                
            }
            else{
                pq.push(s);
                
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
