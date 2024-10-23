// // #include<bits/stdc++.h>
// // using namespace std;
// // long long m = 1e9 + 7;
// // long long recur(long long n, vector<vector<long long>> &dp,vector<long long> &v,long long ind){
// //     if(n == 0) return 1;
// //     if(n < 0 || ind >= v.size()) return 0;

// //     if(dp[n][ind] != -1) return dp[n][ind];
// //     // long long ans = 0;
// //     // for(long long i = ind;i<v.size();i++){
// //     //    ans  += recur(n-v[i],dp,v,i);
// //     //    ans %= m;
// //     // }
// //     long long take  = 0;
// //     if(v[ind] <= n) take = recur(n - v[ind],dp,v,ind)%m;
// //     long long ntake = recur(n,dp,v,ind + 1)%m;

// //     return dp[n][ind] = (take + ntake)%m;
// // }

// // long long main(){
// //     // long long tc;
// //     // cin>>tc;
// //     // while(tc--){

// //         long long n,x;
// //         cin>>n>>x;

// //         vector<long long> v(n);
// //         vector<vector<long long>> dp(x+1,vector<long long>(n+1,-1));

// //         for(long long i = 0;i<n;i++){
// //             cin>>v[i];
// //         }

// //         long long ans = recur(x,dp,v,0);
// //         // if(ans >= long long_MAX ) cout<<-1<<endl;
// //          cout<<ans%m<<endl;

// //     // }

// // }

// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // const long long m = 1e9 + 7;

// // // // // // long long main(){
// // // // // //     // long long tc;
// // // // // //     // cin>>tc;
// // // // // //     // while(tc--){

// // // // // //         long long n,x;
// // // // // //         cin>>n>>x;

// // // // // //         vector<long long> v(n);
// // // // // //         vector<vector<long long>> dp(x+1,vector<long long>(n+1,0));

// // // // // //         for(long long i = 0;i<n;i++){
// // // // // //             cin>>v[i];
// // // // // //         }

// // // // // //         // long long ans = recur(x,dp,v,0);
// // // // // //         // if(ans >= long long_MAX ) cout<<-1<<endl;
// // // // // //         for(long long i = 0;i<n;i++){
// // // // // //             dp[0][i] = 1;
// // // // // //         }

// // // // // //         for(long long i = 1;i<=x;i++){
// // // // // //             for(long long j = 0;j<n;j++){

// // // // // //                 long long ans = 0;
// // // // // //                 for(long long k = j;k<n;k++){
// // // // // //                     if(i - v[k] >= 0)
// // // // // //                     ans  = (ans +  dp[i-v[k]][k])%m;
// // // // // //                 }
// // // // // //                 dp[i][j] = ans;
// // // // // //             }
// // // // // //         }

// // // // // //         //  cout<<dp[x][n]%m<<endl;

// // // // // //     // for(auto it : dp){
// // // // // //     //     for(auto i : it){
// // // // // //     //         cout<<i<<" ";
// // // // // //     //     }
// // // // // //     //     cout<<endl;
// // // // // //     // }
// // // // // //     long long result = 0;
// // // // // //     for (long long j = 0; j < n; j++) {
// // // // // //         result = max(result, dp[x][j]);
// // // // // //     }

// // // // // //     cout << result << endl;

// // // // // //     // }

// // // // // // }

// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // const long long m = 1e9 + 7;

// // // // // // long long main() {
// // // // // //     long long n, x;
// // // // // //     cin >> n >> x;

// // // // // //     vector<long long> v(n);
// // // // // //     vector<vector<long long>> dp(x + 1, vector<long long>(n + 1, 0));

// // // // // //     for (long long i = 0; i < n; i++) {
// // // // // //         cin >> v[i];
// // // // // //     }

// // // // // //     // Initialize base case: dp[0][j] = 1 for all j
// // // // // //     for (long long j = 0; j <= n; j++) {
// // // // // //         dp[0][j] = 1;
// // // // // //     }

// // // // // //     // Fill the dp array
// // // // // //     for (long long i = 1; i <= x; i++) {
// // // // // //         for (long long j = 0; j < n; j++) {
// // // // // //             long long ans = 0;
// // // // // //             for (long long k = j; k < n; k++) {
// // // // // //                 if (i - v[k] >= 0) {
// // // // // //                     ans += dp[i - v[k]][k];
// // // // // //                     ans %= m;
// // // // // //                 }
// // // // // //             }
// // // // // //             dp[i][j] = ans % m;
// // // // // //         }
// // // // // //     }

// // // // // //     // The final answer should be the sum of all dp[x][j] for j = 0 to n-1
// // // // // //     long long result = 0;
// // // // // //     for (long long j = 0; j < n; j++) {
// // // // // //         result += dp[x][j];
// // // // // //         result %= m;
// // // // // //     }

// // // // // //     cout << result << endl;

// // // // // //     return 0;
// // // // // // }

// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // using ll = long long;using vi = vector<long long>;
// // // // #define pb push_back
// // // // #define rsz resize#define all(x) begin(x), end(x)
// // // // #define sz(x) (long long)(x).size()using pi = pair<long long,long long>;
// // // // #define f first#define s second
// // // // #define mp make_pairvoid setIO(string name = "") 
// // // //  // name is nonempty for USACO file I/O    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output    if(sz(name)){        freopen((name+".in").c_str(), "r", stdin); // see Input & Output        freopen((name+".out").c_str(), "w", stdout);    }}
// // // // ll dp[1000001];
// // // // const long long MOD = (long long)1e9 + 7;
// // // // long long main()
// // // // {
// // // //     long long n, x;
// // // //     cin >> n >> x;
// // // //     vi coins(n);
// // // //     for (long long i = 0; i < n; i++)
// // // //     {
// // // //         cin >> coins[i];
// // // //     }
// // // //     dp[0] = 1;
// // // //     for (long long weight = 0; weight <= x; weight++)
// // // //     {
// // // //         for (long long i = 1; i <= n; i++)
// // // //         {
// // // //             if (weight - coins[i - 1] >= 0)
// // // //             {
// // // //                 dp[weight] += dp[weight - coins[i - 1]];
// // // //                 dp[weight] %= MOD;
// // // //             }
// // // //         }
// // // //     }
// // // //     cout << dp[x] << '\n';
// // // // }

// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // long long main() {
// // //   long long mod = 1e9+7;
// // //   long long n, target;
// // //   cin >> n >> target;
// // //   vector<long long> x(n);
// // //   for (long long&v : x) cin >> v;

// // //   vector<vector<long long>> dp(n+1,vector<long long>(target+1,0));
// // //   dp[0][0] = 1;
// // //   for (long long i = 1; i <= n; i++) {
// // //     for (long long j = 0; j <= target; j++) {
// // //       dp[i][j] = dp[i-1][j];
// // //       long long left = j-x[i-1];
// // //       if (left >= 0) {
// // // 	(dp[i][j] += dp[i][left]) %= mod;
// // //       }
// // //     }
// // //   }
// // //   cout << dp[n][target] << endl;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // long long mod = 1e9+7;
// // vector<long long> x;
// // vector<vector<long long>> memo;

// // long long countWays(long long i, long long target) {
// //     if (target == 0) return 1;
// //     if (i == 0) return 0;
// //     if (memo[i][target] != -1) return memo[i][target];

// //     memo[i][target] = countWays(i-1, target); // Exclude the current element
// //     if (target >= x[i-1]) {
// //         memo[i][target] = (memo[i][target] + countWays(i, target - x[i-1])) % mod; // Include the current element
// //     }

// //     return memo[i][target];
// // }

// // long long main() {
// //     long long n, target;
// //     cin >> n >> target;
// //     x.resize(n);
// //     for (long long &v : x) cin >> v;

// //     memo.assign(n+1, vector<long long>(target+1, -1));

// //     cout << countWays(n, target) << endl;
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// long long m = 1e9 + 7;

// long long recur(long long n, vector<vector<long long>> &dp, vector<long long> &v, long long ind) {
//     if(n == 0) return 1;
//     if(n < 0 || ind >= v.size()) return 0;

//     if(dp[n][ind] != -1) return dp[n][ind];

//     long long take = 0;
//     if(v[ind] <= n) take = recur(n - v[ind], dp, v, ind) % m;
//     long long ntake = recur(n, dp, v, ind + 1) % m;

//     return dp[n][ind] = (take + ntake) % m;
// }

// long long main() {
//     long long n, x;
//     cin >> n >> x;

//     vector<long long> v(n);
//     vector<vector<long long>> dp(x + 1, vector<long long>(n, -1));

//     for(long long i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     long long ans = recur(x, dp, v, 0);
//     cout << ans << endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
 
long long main() {
  long long mod = 1e9+7;
  long long n, target;
  cin >> n >> target;
  vector<long long> x(n);
  for (long long&v : x) cin >> v;
 
  vector<vector<long long>> dp(n+1,vector<long long>(target+1,0));
  for(long long i = 0;i<=n;i++){
    dp[i][target] = 1;
  }

for(long long i = n-1;i>=0;i--){
    for(long long tar = target;tar>=0;tar--){
        dp[i][tar] = dp[i+1][tar];
        if(tar + x[i] <= target){
            dp[i][tar] = (dp[i][tar] + dp[i][tar+x[i]]) % mod;
        }
    }
}
  cout << dp[0][0] << endl;
}
