// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// bool check(long long m,vector<pair<long long,long long>> &v,long long l){
//     long long count = 1;
//     long long st = 0;
//     while(st < v.size()){
//         long long tc = 1;
//         long long k = v[st].first;
//         for(long long i = st+1;i<v.size();i++){
//             if(k<=l - v[i].first - abs(v[i].second - v[i-1].second)){
//             k += v[i].first;

//             k += abs(v[i].second - v[i-1].second);
//             tc++;
//             }
//             else break;
//         }
//         st++;
//         if(tc >=m) return true;
//     }
//     return false;
    
// }
// long long main() {
    

//    long long n;
//    cin>>n;
//    while(n--){
//     long long n,l;
//     cin>>n>>l;
//     vector<pair<long long,long long>> v;
//     for(long long i = 0;i<n;i++){
//         long long a,b;
//         cin>>a>>b;
//         v.push_back({a,b});
//     }

//     sort(v.begin(),v.end());
//     long long low = 0,high = n;
//     long long ans = 0;
//     while(low < high){
//         long long mid = (low + high)/2;

//         if(check(mid,v,l) == true){
//             ans = mid;
//             low = mid;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     cout<<ans<<endl;

//    }

// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(long long m, vector<pair<long long,long long>> &v, long long l){
    long long count = 1;
    long long st = 0;
    // while(st < v.size()){
        long long k = v[st].second;
        long long tc = 0;
        if(k <= l){
            tc = 1;
        }
        else return false;
        for(long long i = 1; i < v.size(); i++){
            if(k + abs(v[i].first - v[i-1].first) + v[i].second <= l){
                k += v[i].second;
                k += abs(v[i].first - v[i-1].first);
                tc++;
            }
            else break;
        }
        st++;
        if(tc == m) return true;
    // }
    return false;
}

long long main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n, l;
        cin >> n >> l;
        vector<pair<long long,long long>> v;
        for(long long i = 0; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            v.push_back({b, a});
        }

        sort(v.begin(), v.end());
        long long low = 0, high = n;
        long long ans = 0;
        while(low <= high){
            long long mid = (low + high) / 2;

            if(check(mid, v, l)){
                // cout<<"mid  - "<<mid<<endl;
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
