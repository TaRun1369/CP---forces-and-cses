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
    cin >> n;
 
        long long ar[n];
        for(long long i=0;i<n;i++)
            cin >> ar[i];
 
        sort(ar,ar+n);
 
        long long ans=-1;
        for(long long liars=0;liars<=n;liars++)
        {
            long long lying = 0;
            for(long long j = 0;j<n;j++){
                if(liars<ar[j]){
                    lying++;
                }
            }
            
            if(lying==liars)
                ans=liars;
        }
 
        cout << ans << "\n";

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
