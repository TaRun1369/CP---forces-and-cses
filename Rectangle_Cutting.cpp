#include<bits/stdc++.h>
using namespace std;

long long main(){
   long long a,b;
   cin>>a>>b;
   vector<vector<long long>> dp(a+1,vector<long long>(b+1,1e9));

   for(long long i = 1;i<=a;i++){
    for(long long j = 1;j<=b;j++){
        if(i == j) {
            dp[i][i] = 0;
            continue;
        }

        for(long long k = 1;k<i;k++){
            dp[i][j] = min(dp[i][j],dp[k][j] + dp[i-k][j] + 1);
        }
        for(long long k = 1;k<j;k++){
            dp[i][j] = min(dp[i][j] , dp[i][k] + dp[i][j - k]  + 1);
        }
    }
   }
   cout<<dp[a][b]<<endl;
}

