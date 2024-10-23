#include<bits/stdc++.h>
using namespace std;
// const long long m = 1e9+7;
// define 
// state 
// dp[i][j] - ith ind wale page , jth cost pe max pages kitne mil rahe

// transition
// dp[i][j] = max(dp[i-1][j],dp[i-1][j+price[i-1]]+pages[i-1])
// base case
// dp[i][0] = 0;

// final subproblem
 
long long main(){
    long long n,m;
    cin>>n>>m;

    vector<long long> price(n),pages(n);

    for(long long i = 0;i<n;i++) cin>>price[i];
    for(long long i = 0;i<n;i++) cin>>pages[i];


    vector<vector<long long>> dp(n+1,vector<long long> (m+1,0));


    for(long long i= n-1;i>=0;i--){
        for(long long j = 0;j<=m;j++){
            
            dp[i][j] = dp[i+1][j];
            if(j >= price[i]){
                dp[i][j]= max(dp[i][j],dp[i+1][j-price[i]]+ pages[i]);
            }
        }
    }

    cout<< dp[0][m]<<endl;
}




// #include <bits/stdc++.h>
// using namespace std;

// long long main() {
//     long long n, m;
//     cin >> n >> m;

//     vector<long long> price(n), pages(n);

//     for (long long i = 0; i < n; i++) cin >> price[i];
//     for (long long i = 0; i < n; i++) cin >> pages[i];

//     vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));

//     for (long long i = n - 1; i >= 0; i--) {
//         for (long long j = 0; j <= m; j++) {
//             dp[i][j] = dp[i + 1][j];
//             if (j >= price[i]) {
//                 dp[i][j] = max(dp[i][j], dp[i + 1][j - price[i]] + pages[i]);
//             }
//         }
//     }

//     cout << dp[0][m] << endl;
//     return 0;
// }
