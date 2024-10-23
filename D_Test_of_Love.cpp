// // #include<bits/stdc++.h>
// // using namespace std;
// // bool recur(long long n,long long m,long long k,vector<char> &rasta,long long curr){
// //     if(curr == n) return true;
// //     if(rasta[curr] == 'C') return false;
// //     bool ans = false;
// //     for(long long i = curr + 1;i< n;i++){
// //         if(curr == -1){
// //             if(i < m)
// //             ans |= recur(n,m,k,rasta,i);
// //         }
// //         else{
// //             if(rasta[curr] == 'L'){
// //                 if(i - curr < m) {
// //                     // jump
// //                     ans |= recur(n,m,k,rasta,i);
// //                 }
// //             }
// //             else if(rasta[curr] == 'W'){
// //                 if(k > 0){
// //                     // swim
// //                     ans |= recur(n,m,k,rasta,curr + 1);
// //                 }
// //             }
// //         }
// //     } 
// //     return ans;
// // }
// // long long main(){
// //     long long t;
// //     cin>>t;

// //     while(t--){
// //        long long n,m,k;
// //        cin>>n>>m>>k;
// //        vector<char> rasta(n);
// //        for(long long i=0;i<n;i++)cin>>rasta[i];
// //        bool ans = recur(n,m,k,rasta,-1);
// //        if(ans == true) cout<<"YES"<<endl;
// //        else cout<<"NO"<<endl;
// //     }
// // }
// #include<bits/stdc++.h>
// using namespace std;

// bool recur(long long n, long long m, long long k, vector<char>& rasta, long long curr, long long swam) {
//     if (curr == n) return true;  // reached the right bank
//     if (rasta[curr] == 'C') return false;  // cannot land on a crocodile

//     bool ans = false;
//     for (long long i = curr + 1; i <= curr + m && i <= n; i++) {
//         if (i < n) {
//             if (rasta[i] == 'L') {  // can jump to the log
//                 ans |= recur(n, m, k, rasta, i, swam);
//             } else if (rasta[i] == 'W' && swam + 1 <= k) {  // can swim
//                 ans |= recur(n, m, k, rasta, i, swam + 1);
//             }
//         } else if (i == n) {  // reached the right bank
//             return true;
//         }
//     }
//     return ans;
// }

// long long main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long t;
//     cin >> t;

//     while (t--) {
//         long long n, m, k;
//         cin >> n >> m >> k;
//         vector<char> rasta(n);
//         for (long long i = 0; i < n; i++) cin >> rasta[i];

//         bool ans = recur(n, m, k, rasta, -1, 0);
//         if (ans == true) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

unordered_map<long long, unordered_map<long long, bool>> memo;

bool recur(long long n, long long m, long long k, vector<char>& rasta, long long curr, long long swam) {
    if (curr == n) return true;  
    if (rasta[curr] == 'C') return false;  

    if (memo.count(curr) && memo[curr].count(swam)) {
        return memo[curr][swam];
    }

    bool ans = false;
    for (long long i = curr + 1; i <= curr + m && i <= n; i++) {
        if (i < n) {
            if (rasta[i] == 'L') {  
                ans |= recur(n, m, k, rasta, i, swam);
            } else if (rasta[i] == 'W' && swam + 1 <= k) { 
                ans |= recur(n, m, k, rasta, i, swam + 1);
            }
        } else if (i == n) {  
            return memo[curr][swam] = true;
        }
    }
    return memo[curr][swam] = ans;
}

long long main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;
        vector<char> rasta(n);
        for (long long i = 0; i < n; i++) cin >> rasta[i];

        memo.clear();

        bool ans = recur(n, m, k, rasta, -1, 0);
        if (ans == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
