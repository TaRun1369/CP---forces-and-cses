
#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

bool valid(long long pr,long long m){
    if(pr >= 1 && pr <= m) return true;
    return false;
}
long long main() {
    long long n, m;
    cin >> n>>m;
    vector<long long> a(n);
    vector<vector<long long>> dp(n+1,vector<long long>(m+1,0));    
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(long long i = 1;i<=m;i++){
        if(a[0] == 0 || a[0] == i){
            dp[1][i] = 1;
        }

    }

    for(long long i = 2;i<=n;i++){
        for(long long k = 1;k<=m;k++){
            if(a[i-1] !=0 && a[i-1] != k){
                dp[i][k] = 0;
                continue;
            }

            for(long long prev = k-1;prev <= k+1;prev++){
                if(!valid(prev,m)){
                    continue;
                }
                dp[i][k] = (dp[i][k] + dp[i-1][prev])%mod;
            }
        }
    }

    long long ans = 0;
    for(long long i = 1;i<= m;i++){
        ans = (ans + dp[n][i])%mod;
    }

    cout<<ans<<endl;
    return 0;
}
