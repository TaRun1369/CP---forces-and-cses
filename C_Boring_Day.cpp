// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// long long recur(long long l,long long r,vector<long long> &v,long long i,long long curr){
//     if(i >= v.size()){ 
//         if(curr <= r && curr >= l) return 1;
//         return 0;
//     }

//     long long take = recur(l,r,v,i+1,curr + v[i]);
//     long long nottake = long long_MIN;
//     long long f = 0;
//     if(curr >= l && curr <= r ){
//         f = 1;
//         nottake = f + recur(l,r,v,i,0);
//     }
//     else {
//         nottake = recur(l,r,v,i+1,0);
//     }
    
    

//     return max(take,nottake);
// }
// long long main() {
//     long long t;
//     cin >> t;
 
//     while (t--) {
//         long long n,l,r;
//         cin >> n>>l>>r;
//         // long long flag = 0; // 0 banega 
//         vector<long long> v(n);
//         for(long long i = 0;i<n;i++){
//             cin>>v[i];
//         }
//         // unordered_map<long long,long long> mp;
//         cout<<recur(l,r,v,0,0)<<endl;

       
 
//     }
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

unordered_map<string, long long> memo;

long long recur(long long l, long long r, vector<long long> &v, long long i, long long curr) {
    // Create a unique key for the current state
    string key = to_string(i) + "," + to_string(curr);
    
    // Check if the result for the current state is already computed
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }
    
    if (i >= v.size()) { 
        if (curr <= r && curr >= l) return 1;
        return 0;
    }

    long long take = recur(l, r, v, i + 1, curr + v[i]);
    long long nottake = long long_MIN;
    long long f = 0;

    if (curr >= l && curr <= r) {
        f = 1;
        nottake = f + recur(l, r, v, i, 0);
    } else {
        nottake = recur(l, r, v, i + 1, 0);
    }

    // Store the result in the map before returning
    memo[key] = max(take, nottake);
    
    return memo[key];
}

long long main() {
    long long t;
    cin >> t;
    
    while (t--) {
        long long n, l, r;
        cin >> n >> l >> r;
        
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Clear the memoization map for each test case
        memo.clear();

        cout << recur(l, r, v, 0, 0) << endl;
    }
    
    return 0;
}
