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
#define repr(var,l,r) for(long long var = r,var>l;var--)
long long mod1 = 1000000007;
long long mod2 = 998244353;


void solve(){
    long long n;
    cin>>n;
    
    vector<vector<long long>> a(n);
    for(long long i = 0;i<n;i++){
        long long k;
        cin>>k;
        for(long long j = 0;j<k;j++){
            long long p;
            cin>>p;
            a[i].push_back(p);
        }
    }
    map<long long,long long> m;
    vector<long long> v;
    long long z = 1;
    for(long long i = n-1;i>= 0;i--){
        long long r = 0;
        for(auto it:a[i]){
            if(m.count(it) == 0){
                m[it]++;
                if(r == 0){
                    v.push_back(it);
                    r = 1;
                }
            }
        }
        if(r==0){
            z=0;
        }
    }
    if(z){
        while(v.size()){
            cout<<v.back()<<" ";
            v.pop_back();
        }
        cout<<endl;
    }
    else{
        cout<<"-1"<<endl;;
    }
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
