#include <iostream>
#include <stack>
#include <queue>

using namespace std;
//https://vjudge.net/contest/576664#problem

int main()
{
    int n;
    int bandera_s,bandera_q,bandera_pq;
    
    while(cin>>n){
        bandera_s = 1;
        bandera_q = 1;
        bandera_pq  = 1;
        stack<int> s;
        priority_queue<int> pq;
        queue<int> q;
        for(int i = 0; i<n; i++){
            int op;
            int v;
            cin>>op>>v;
            if(op == 1){
                s.push(v);
                pq.push(v);
                q.push(v);

            }
            if(op==2){
                if (s.empty() || pq.empty() || q.empty()){
                        bandera_s = 0;
                        bandera_pq = 0;
                        bandera_q = 0;
                        
                    }
                    //no podemos saber nada
                else{
                    if(v!=s.top()){
                        bandera_s=0;
                    }
                    if(v!=pq.top()){
                        bandera_pq=0;
                    }
                    if (v!=q.front()){
                        bandera_q=0;
                    }
                    s.pop();
                    pq.pop();
                    q.pop();
                    
                }
                
            }
        }
        if ((bandera_s==1) && (bandera_pq==0)&&(bandera_q==0)){
        cout << "stack"<< endl;
    }
    else if ((bandera_s==0) && (bandera_pq==1)&&(bandera_q==0)){
        cout << "priority queue" << endl;

    }
    else if ((bandera_s==0) && (bandera_pq==0)&&(bandera_q==1)){
        cout << "queue" << endl;
    }
    else if (bandera_s+bandera_pq+bandera_q>1){
        cout<<"not sure"<<endl;
    }
    else{
        cout<<"impossible"<<endl;
    }
    }
    

    return 0;
}
