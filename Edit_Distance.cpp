#include<bits/stdc++.h>
using namespace std;

long long main(){
    string a,b;
    cin>>a>>b;
    long long n = a.size();
    long long m = b.size();

    vector<vector<long long>> dp(n+1,vector<long long> (m+1,0));

    for(long long i = 0;i<=n;i++){
        dp[i][m] = n - i ;
    }

    for(long long j = 0;j<=m;j++){
        dp[n][j] = m - j ;
    }

    for(long long i = n-1;i>=0;i--){
        for(long long j = m-1;j>=0;j--){
            if(a[i] == b[j]){
                dp[i][j] = dp[i+1][j+1];
            }
            else 
            dp[i][j] = 1 + min({dp[i+1][j+1] ,dp[i+1][j],dp[i][j+1]});
        }
    }

    cout<<dp[0][0]<<endl;
}

// #include<bits/stdc++.h>
// using namespace std;

// long long main(){
//     string a, b;
//     cin >> a >> b;
//     long long n = a.size();
//     long long m = b.size();

//     vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));

//     for (long long i = 0; i <= n; i++) {
//         dp[i][m] = n - i;
//     }

//     for (long long j = 0; j <= m; j++) {
//         dp[n][j] = m - j;
//     }

//     for (long long i = n - 1; i >= 0; i--) {
//         for (long long j = m - 1; j >= 0; j--) {
//             if (a[i] == b[j]) {
//                 dp[i][j] = dp[i + 1][j + 1];
//             } else {
//                 dp[i][j] = 1 + min({dp[i + 1][j + 1], dp[i + 1][j], dp[i][j + 1]});
//             }
//         }
//     }

//     cout << dp[0][0] << endl;
//     return 0;
// }
