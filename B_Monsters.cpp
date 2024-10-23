    // #include <bits/stdc++.h>
    // #include <string>
    // #include <algorithm>
    // using namespace std;

    // bool cmp(pair<long long,long long> a,pair<long long,long long> b){
    //     if(a.first == b.first){
    //         return a.second < b.second;
    //     }
    //     return a.first > b.first;
    // }
    // long long main() {
    //     long long tc;
    //     cin>>tc;
    //     while(tc--){
    //        long long n,k;
    //        cin>>n>>k;
    //     //    vector<long long> v(n);
    //     priority_queue<pair<long long,long long>,vector<pair<long long,long long>> , decltype(&cmp)> pq;
    //     for(long long i = 0;i<n;i++){
    //         long long x;
    //         cin>>x;
    //         pq.push({x,i + 1});
    //     }
    //     // vector<long long> ans;
    //     while(!pq.empty()){
    //         auto t = pq.top();
    //         cout<<" ele "<<t.first<<" "<<t.second<<endl;
    //         pq.pop();
    //         t.first -= k;
    //         if(t.first <= 0) cout<<t.second<<" ";
    //         else{
    //             pq.push(t);
    //         }
    //     }
    //     cout<<endl;

    //     }
    
    
    // }

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

// Comparator function
bool cmp(pair<long, long> a, pair<long, long> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

long long main() {
    long long tc;
    cin >> tc;
    while (tc--) {
        long long n, k;
        cin >> n >> k;
        // Define the priority queue with the comparator
        // priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, decltype(&cmp)> pq(cmp);
        vector<pair<long,long>> pq;
        for (long long i = 0; i < n; i++) {
            long long x;
            cin >> x;
            pq.push({x, i + 1});
        }
        sort(pq.begin(), pq.end(), cmp);

        // while (!pq.empty()) {
        //     auto t = pq.top();
        //     // cout << " ele " << t.first << " " << t.second << endl;
        //     pq.pop();
        //     t.first -= k;
        //     if (t.first <= 0) {
        //         cout << t.second << " ";
        //     } else {
        //         pq.push(t);
        //     }
        // }
        // cout << endl;
        for(auto &it : pq){
            
        }
    }
}
