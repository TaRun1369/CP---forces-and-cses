#include<bits/stdc++.h>
using namespace std;

long long ip[200001];
long long main(){
    long long n;
    cin>>n;
    long long sum = 0;
    for(long long i = 0;i<n-1;i++){
        long long x;
        cin>>x;
        sum += x;
    }

    long long actual = (n)*1ll*(n+1)/2;

    cout<<actual - sum<<endl;;

    
}