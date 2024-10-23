// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define long long long long
// // // vector<long long> tree[200001];
// // // long long next[200001][21];
// // // long long level[200001];
// // // long long ans[200001];
// // // long long n,m;


// // // void preprocess(long long curr){
// // //     for(long long i = 2;i<21;i++){
// // //         next[curr][i] = next[next[curr][i-1]][i-1];
// // //     }
    
// // //     for(long long child : tree[curr]){
// // //         if(child != par){
// // //             preprocess(child,curr);
// // //         }
// // //     }
// // // }
// // // long long query(long long node,long long k){
// // //     if(node == -1) return -1;
// // //     if(k == 0) return node;

// // //     for(long long i = 20;i>=0;i--){
// // //         if(k & (1 << i)){
// // //             return query(ancestor[node][i],k - (1 << i));
// // //         }
// // //     }
// // // }

// // // long long32_f main(){
// // //     cin>>n>>q;

// // //     for(long long i = 1;i<=n;i++){
// // //         next[i][0] = i;
// // //         long long a;
// // //         cin>>a;
// // //         next[i][1] = a;
// // //     }

// // //     for(long long i = 0;i<q;i++){
// // //         long long a,b;
// // //         cin>>a>>b;
// // //         query(a,b);
// // //     }

    



// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define long long long long

// // vector<long long> graph[200001];
// // long long next1[200001][21];
// // long long n, q;

// // void preprocess(long long curr, long long par){
// //     for(long long i = 1; i < 21; i++){
// //         if(next1[curr][i-1] != -1)
// //             next1[curr][i] = next1[next1[curr][i-1]][i-1];
// //         else
// //             next1[curr][i] = -1;
// //     }
    
// //     for(long long neighbor : graph[curr]){
// //         if(neighbor != par){
// //             preprocess(neighbor, curr);
// //         }
// //     }
// // }

// // long long query(long long node, long long k){
// //     if(node == -1) return -1;
// //     for(long long i = 20; i >= 0; i--){
// //         if(k & (1 << i)){
// //             node = next1[node][i];
// //             if(node == -1) break;
// //         }
// //     }
// //     return node;
// // }

// // long long32_t main(){
// //     cin >> n >> q;

// //     // Read graph structure
// //     for(long long i = 1; i <= n; i++){
// //         // next1[i][0] = i; // Initialize the first element to itself
// //         long long a;
// //         cin >> a;
// //         if(a != -1) {
// //             next1[i][0] = a;
// //             graph[a].push_back(i);
// //             graph[i].push_back(a);
// //         } else {
// //             next1[i][1] = -1; // No next node
// //         }
// //     }

// //     for(long long i = 1; i <= n; i++){
// //         if(next1[i][1] != -1){
// //             preprocess(i, -1);
// //         }
// //     }

// //     // Handle queries
// //     for(long long i = 0; i < q; i++){
// //         long long a, b;
// //         cin >> a >> b;
// //         cout << query(a, b) << endl;
// //     }

// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// #define long long long long

// vector<long long> graph[200001];
// long long next1[200001][21];
// long long n, q;

// void preprocess() {
//     for(long long j = 1; j < 21; j++) {
//         for(long long i = 1; i <= n; i++) {
//             if(next1[i][j-1] != -1)
//                 next1[i][j] = next1[next1[i][j-1]][j-1];
//             else
//                 next1[i][j] = -1;
//         }
//     }
// }

// long long query(long long node, long long k) {
//     for(long long i = 20; i >= 0; i--) {
//         if(k & (1 << i)) {
//             node = next1[node][i];
//             if(node == -1) break;
//         }
//     }
//     return node;
// }

// long long32_t main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

//     cin >> n >> q;

//     // Read graph structure
//     for(long long i = 1; i <= n; i++) {
//         long long a;
//         cin >> a;
//         next1[i][0] = a;
//         if(a != -1) {
//             graph[a].push_back(i);
//         }
//     }

//     // Preprocess to fill the binary lifting table
//     preprocess();

//     // Handle queries
//     while(q--) {
//         long long a, b;
//         cin >> a >> b;
//         cout << query(a, b) << endl;
//     }

//     return 0;
// }
/*
*	Author: rishabhxchoudhary
*	Created: 13.02.2024 19:15:36 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
 
#define long long long long long long
#define double long double
#define endl '\n'
 
const long long MOD = 1000000007;
 
// signed main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
 
//     long long n,q;
//     cin>>n>>q;
//     long long m = 30;
 
//     vector<vector<long long>> sparseTable(m+1,vector<long long> (n+1,-1));
//     for (long long i = 1; i <= n; i++) {
//         cin>>sparseTable[0][i];
//     }
 
//     for (long long i = 1; i <= m; i++) {
//         for (long long j = 1; j <= n; j++) {
//             sparseTable[i][j] = sparseTable[i-1][sparseTable[i-1][j]];
//         }
//     }
 
//     while(q--) {
//         long long x,k;
//         cin>>x>>k;
//         long long ans = x;
//         for (long long i = 0; i <=m; i++) {
//             if (k&(1<<i)){
//                 ans = sparseTable[i][ans];
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

signed main(){
    long long n,q;
    cin>>n>>q;
    long long m = 30;
    vector<vector<long long>> st(m+1,vector<long long>(n+ 1,-1));
    for(long long i = 1;i<=n;i++){
        cin>>st[0][i];
    }


    for(long long i = 1;i<=m;i++){
        for(long long j = 1;j<=n;j++){
            st[i][j] = st[i-1][st[i-1][j]];
        }
    }
    while(q--){
        long long a,b;
        cin>>a>>b;
        long long ans = a;
        for(long long i = 0;i<=m;i++){
            if(b&(1<<i )){
                ans = st[i][ans];
            }
        }
        cout<<ans<<endl;
    }
}