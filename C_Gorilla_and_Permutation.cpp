#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        for(long long i = n;i>= m + 1;i--){
            cout<<i<<" ";
        }
        for(long long i = 1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}