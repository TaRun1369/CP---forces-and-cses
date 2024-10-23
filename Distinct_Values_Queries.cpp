// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long


// long long main() {
//     long long n, q;
//     cin >> n >> q;
//     for (long long i = 0; i < n; i++) {
//         cin >> input[i];
//     }
//     build(0, 0, n - 1);
//     vector<pair<long long,long long>> query(q);
//     map<pair<long long,long long>,long long>mp;
//     vector<long long> ans (q);
//     for (long long i = 0; i < q; i++) {
//         long long l, r;
//         cin >> l >> r;
//         l--; r--; // assuming 0-based indexing
//         query[i] = {l,r};
//         mp[{l,r}] = i;
//     }
//     map<long long,long long> count;
//     sort(query.begin(),query.end());
//     long long currS = 0,currE = n-1;
//     for(long long i = 0;i<n;i++){
//         count[input[i]]++;
//     }
//     for(auto it : query){
//         long long start = it.first;
//         long long end = it.second;

//         if(currS > start){
//             for(long long i = start;i<currS;i++){
//                 count[input[i]]++;
//             }
//         }
//         else if(currS < start){
//             for(long long i = currS;i<start;i++){
//                 count[input[i]]--;
//                 if(count[input[i]] == 0){
//                     count.erase(input[i]);
//                 }
//             }
//         }

//         if(currE > end){
//             for(long long i = currE;i>end;i--){
//                 count[input[i]]--;
//                 if(count[input[i]] == 0){
//                     count.erase(input[i]);
//                 }
//             }
//         }
//         else if(currE < end){
//             for(long long i = currE + 1;i<= end;i++){
//                 count[input[i]]++;
//             }
//         }
//        ans [mp[it]] = mp.size();
//     }

//     for(long long i = 0;i<q;i++){
//         cout<<ans[i]<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long main() {
    long long n, q;
    cin >> n >> q;
    
    vector<long long> input(n);
    for (long long i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    vector<pair<long long, long long>> query(q);
    map<pair<long long, long long>, long long> mp;
    vector<long long> ans(q);
    
    for (long long i = 0; i < q; i++) {
        long long l, r;
        cin >> l >> r;
        l--; r--; // assuming 0-based indexing
        query[i] = {l, r};
        mp[{l, r}] = i;
    }
    
    sort(query.begin(), query.end());
    map<long long, long long> count;
    
    long long currS = 0, currE = -1; // start with an invalid segment
    
    for (auto it : query) {
        long long start = it.first;
        long long end = it.second;

        // Extend the current segment to the right if needed
        while (currE < end) {
            currE++;
            count[input[currE]]++;
        }
        
        // Contract the current segment from the right if needed
        while (currE > end) {
            count[input[currE]]--;
            if (count[input[currE]] == 0) {
                count.erase(input[currE]);
            }
            currE--;
        }
        
        // Extend the current segment to the left if needed
        while (currS > start) {
            currS--;
            count[input[currS]]++;
        }
        
        // Contract the current segment from the left if needed
        while (currS < start) {
            count[input[currS]]--;
            if (count[input[currS]] == 0) {
                count.erase(input[currS]);
            }
            currS++;
        }

        // Store the result of the current query
        ans[mp[it]] = count.size();
    }

    for (long long i = 0; i < q; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
