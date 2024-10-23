#include <bits/stdc++.h>
using namespace std;

long long main(){
    long long n;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    if(n < 4){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(long long i = 2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(long long i = 1;i<=n;i+=2){
        cout<<i<<" ";
    }

    
}