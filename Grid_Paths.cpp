#include<bits/stdc++.h>
using namespace std;
const long long m = 1e9+7;
// define 
// state 
    // dp[i][j] - no. of ways to go from i,j to n-1,n-1

// transition
    // dp[i][j]  = (dp[i-1][j] + dp[i][j-1])%m
// base case
// dp[0][0] = 1 


// final subproblem
// dp[n-1][n-1]
 
long long main(){
    long long n;
    cin>>n;
    vector<vector<char>>grid(n,vector<char>(n));

    for(long long i = 0;i<n;i++){
        string s;
        cin>>s;
        for(long long j = 0;j<n;j++){
            grid[i][j] = s[j];
        }
    }

    // for(long long i = 0;i<n;i++){
       
    //     for(long long j = 0;j<n;j++){
    //         cout<<grid[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



    vector<vector<long long> >dp(n+1,vector<long long> (n+1,0));
    if(grid[0][0] != '*')
    dp[0][0] = 1;
    
    for(long long i = 0;i<n;i++){
        for(long long j= 0;j<n;j++){
            if(grid[i][j] != '*' ){
            if(i - 1 >= 0)
            dp[i][j] += (dp[i-1][j]%m);
            if(j - 1 >= 0)
            dp[i][j] += (dp[i][j-1]%m);
            }
            

            
        }
    }


    cout<<dp[n-1][n-1]%m;
}



