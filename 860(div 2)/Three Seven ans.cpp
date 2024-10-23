
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
#define repr(var,l,r) for(long long var = r,var>l;var--)
long long mod1 = 1000000007;
long long mod2 = 998244353;


void solve(){
    
    long long m;
    cin>>m;
    vector<vi> a(m);
    
    rep(i,0,m){
        long long n;
        cin>>n;
        rep(j,0,n){
            long long x;
            cin>>x;
            a[i].push_back(x);
        }
    }
    vi ans(m,-1);
    
    set<long long> done;
    
    for(long long i = m-1;i>=0;i--){
        for(long long j = 0;j<a[i].size();j++){
            if(done.count(a[i][j]) == 0){
                ans[i] = a[i][j];
                done.insert(a[i][j]);
            }
        }
        if(ans[i] == -1){
            cout<<"-1"<<endl;
            return;
        }
    }
    rep(i,0,m){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
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
