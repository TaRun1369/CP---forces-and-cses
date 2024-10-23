#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 
long long main() {
    long long t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;
        long long rem = 2023;
        long long flagP = 1;
        for(long long i = 0;i<n;i++){
            long long x;
            cin>>x;
            if(rem%x != 0){
                flagP = 0;//not possible
            }
            rem/=x;
        }

        if(!flagP){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<rem<<" ";
            for(long long i = 1;i<k;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
}
