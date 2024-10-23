#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        for(long long i = 0;i<5;i++){
            long long mini = min({n,m,k});
            if(mini == n){
                n++;
            }
            else if(mini == m){
                m++;
            }
            else {
                k++;
            }
        }
        cout<<n*m*k<<endl;
    }
}