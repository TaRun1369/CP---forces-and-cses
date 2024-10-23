#include<bits/stdc++.h>
using namespace std;
#define long long long long
const long long mod = 1e9 + 7;


long long32_t main(){
    long long t;
    cin>>t;
    vector<vector<long long>>dp(1e6+1,vector<long long>(2));
    while(t--){
        long long n;
        cin>>n;

        dp[n][0] = 1;
        dp[n][1] = 1;

        for(long long i = n-1;i>=0;i--){
            dp[i][0] = (2LL * dp[i+1][0] + dp[i+1][1])%mod;
            dp[i][1] = (4LL * dp[i+1][1] + dp[i+1][0])%mod;
        }
        cout<<(dp[1][0] + dp[1][1])%mod<<endl;

    }

}


// /* Priyansh Agarwal*/
// #include<bits/stdc++.h>

// #define MOD 1000000007
 
// using namespace std;

// vector<vector<long long>> dp(1e6 + 1, vector<long long>(2));
// long long main(){
//     long long t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         // dp[i][0] = number of ways to fill up the grid from 
//         // ith row to the top such that there is a 1*2 block
//         // on the i-1th row trying to extend forward
        
        
//         // dp[i][1] = number of ways to fill up the grid from 
//         // ith row to the top such that there is are 2 1*1 blocks
//         // on the i-1th row trying to extend forward
        
//         // base cases
//         dp[n][0] = 1;
//         dp[n][1] = 1;
//         for(long long i = n - 1; i >= 0; i--){
//             dp[i][0] = (2LL * dp[i+1][0] + dp[i+1][1]) % MOD;
//             dp[i][1] = (4LL * dp[i+1][1] + dp[i+1][0]) % MOD;
//         }
        
//         // final subproblem
//         cout << (dp[1][0] + dp[1][1]) % MOD << endl;
//     }
//     // time complexity: O(tn)
// }