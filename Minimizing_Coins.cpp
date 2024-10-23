
#include<bits/stdc++.h>
using namespace std;
long long recur(long long n, vector<long long> &dp,vector<long long> &v){
    if(n == 0) return 0;
    if(n < 0) return long long_MAX;
    
    if(dp[n] != -1) return dp[n];
    long long ans = long long_MAX;
    for(long long i = 0;i<v.size();i++){
       ans  = min(recur(n-v[i],dp,v),ans);
       
    }
    return dp[n] = ans + 1;
}

long long main(){
    // long long tc;
    // cin>>tc;
    // while(tc--){
       
        long long n,x;
        cin>>n>>x;
        
        vector<long long> v(n);
                vector<long long> dp(x+1,-1);

        for(long long i = 0;i<n;i++){
            cin>>v[i];
        }
        
        long long ans = recur(x,dp,v);
        if(ans >= long long_MAX ) cout<<-1<<endl;
        else cout<<ans<<endl;



    // }
   
}
