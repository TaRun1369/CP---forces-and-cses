// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
//  long long recur(long long curr,vector<long long> &v,long long n,unordered_map<long long,vector<long long> > mp){
//     if(curr == n-1){
//         return 1;
//     }
//     long long left = long long_MAX;
//     long long right = long long_MAX;
//     if(curr > 0)
//      left = recur(curr-1,v,n,mp);
//     if(curr < n-1)
//      right = recur(curr+1,v,n,mp);
//     long long dir = long long_MAX;
//     if(mp[v[curr]].size() > 1){
//         for(auto it : mp[v[curr]]){
//             if(it != curr){
//                 dir = min(dir,recur(it,v,n,mp));
//             }
//         }
//     }
    
//     return 1 + min(min(left,right),dir);

//  }
//  long long ans(long long n,vector<long long> &v){
//     unordered_map<long long,vector<long long> > mp;
//     for(long long i = 0;i<n;i++ ){
//         mp[v[i]].push_back(i);
//     } 
//     return recur(0,v,n,mp);
//  }
 
// long long main() {
    
//     long long n;
//     cin>>n;
//     vector<long long> v(n);
//     for(long long i = 0;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<ans(n,v);

   
// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long recur(long long curr, vector<long long> &v, long long n, unordered_map<long long, vector<long long>> &mp) {
    if (curr == n - 1) {
        return 1;
    }
    long long left = long long_MAX;
    long long right = long long_MAX;
    if (curr > 0)
        left = recur(curr - 1, v, n, mp);
    if (curr < n - 1)
        right = recur(curr + 1, v, n, mp);
    long long dir = long long_MAX;
    if (mp[v[curr]].size() > 1) {
        for (auto it : mp[v[curr]]) {
            if (it != curr) {
                dir = min(dir, recur(it, v, n, mp));
            }
        }
    }

    return 1 + min(min(left, right), dir);
}

long long ans(long long n, vector<long long> &v) {
    unordered_map<long long, vector<long long>> mp;
    for (long long i = 0; i < n; i++) {
        mp[v[i]].push_back(i);
    }
    return recur(0, v, n, mp);
}

long long main() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    cout << ans(n, v);

    return 0;
}
