/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#pragma GCC optimize("ofast")
#pragma GCC target('sse,sse2,sse3,ssse3,sse4,popcnt,abn,mmx,avx,avx2,fma')
#pragma GCC optimize("unroll-loops")


#include <bits/stdc++.h>
using namespace std;
// using namespace __gnu_pbds;

typedef long long ll;

#define vi vector<long long>
#define vii vector<vector<long long>>
#define pi pair<long long,long long>
#define mi map<long long,long long>
#define si set<long long>
#define rep(var,l,r) for(long long var = l;var<r;var++)
#define repr(var,l,r) for(long long var = r,var>= l;var--)
long long mod1 = 1000000007;
long long mod2 = 998244353;


void solve(){
    long long n;
    cin>>n;
    ll a[n],b[n];
    for(long long i = 0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    long long ans = 1;
    ll l = b[0];
    ll g = a[0]*b[0];
    for(long long i =0;i<n;i++){
        if(__gcd(a[i]*b[i],g)%((l*b[i])/__gcd(l,b[i])) == 0){
            g = __gcd(a[i]*b[i],g);
            l = (l*b[i])/__gcd(l,b[i]);
        }
        else{
            ans++;
            g = a[i]*b[i];
            l = b[i];
        }
    }
    cout<<ans<<endl;
}



using namespace std;

long long main()
{
    long long tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}
