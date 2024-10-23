
#include<bits/stdc++.h>
using namespace std;
long long m = 1e9 + 7;
long long recur(long long n, vector<long long> &dp){
    if(n == 0) return 1;
    if(n < 0) return 0;
    
    if(dp[n] != -1) return dp[n];
    long long ans = 0;
    for(long long i = 1;i<=6;i++){
       ans += recur(n-i,dp);
       ans%=m;
    }
    return dp[n] = ans%m;
}

long long main(){
    // long long tc;
    // cin>>tc;
    // while(tc--){
       
        long long n;
        cin>>n;
        vector<long long> dp(n+1,-1);

        cout<<recur(n,dp)%m;




    // }
   
}
