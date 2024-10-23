

#include<bits/stdc++.h>
using namespace std;
const long long m = 1e9 + 7;


long long main(){
    // long long tc;
    // cin>>tc;
    // while(tc--){
       
        long long n,x;
        cin>>n>>x;
        
        vector<long long> v(n);
        vector<long long> dp(x+1,0);

        for(long long i = 0;i<n;i++){
            cin>>v[i];
        }
        
        // long long ans = recur(x,dp,v)%m;
        dp[0] = 1;

        for(long long i = 1;i<=x;i++){
            for(long long j = 0;j<n;j++){
                if(i - v[j] >= 0)
                dp[i] = (dp[i] + dp[i - v[j]]) % m;
                
            }

        }

         cout<<dp[x]<<endl;


    // }
   
}


