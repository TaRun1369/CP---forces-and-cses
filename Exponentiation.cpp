#include<bits/stdc++.h>
using namespace std;
// long long modular(long long a,long long b,long long mod = 1e9 + 7){
//     if(b <= 1) return a%mod;

//     long long res = modular(a,b/2,mod);
//     res = (res*res)%mod;
//     if(b&1){
//         res = ((res%mod) * (a%mod)) % mod;
//     }

//     return res%mod;
// }
long long modular(long long a, long long b, long long mod = 1e9 + 7) {
    if(b == 0) return 1;
    if(b == 1) return a % mod;

    long long res = modular(a, b / 2, mod);
    res = (res * res) % mod;
    if(b & 1) {
        res = ((res % mod) * (a % mod)) % mod;
    }

    return res % mod;
}

long long main(){
    long long n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        if(a == 0 && b == 0) cout<<1<<endl;
        else 
        cout<<modular(a,b)<<endl;
    }
}