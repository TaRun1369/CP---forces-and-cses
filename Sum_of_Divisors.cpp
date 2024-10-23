#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
// long long sum(long  a,long b){
//     return ((((b - a + 1)%mod)*((a + b)%mod))%mod)/2;   
// }
long long sum(long long a, long long b) {
    long long cnt = (b - a + 1) % mod;
    long long first = a % mod;
    long long last = b % mod;
    
    long long totalSum = (cnt * (first + last) % mod) % mod;
    
    // Using modular inverse of 2 under mod to avoid division issues
    long long half = (totalSum * ((mod + 1) / 2)) % mod;
    
    return half;
}
long long main(){
    long long n;
    cin>>n;
    long long ans = 0;
    
    for(long long i = 1;i<=n;){

        long long div = n/i;
        long long lastsame = n/div;
        ans = (ans + sum(i,lastsame)*div) % mod;
        // cout<<"i - "<<i<<" ans - " <<ans<<endl;
        i = lastsame + 1;
    }

    cout<<ans%mod<<endl;
}