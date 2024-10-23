
// #include <bits/stdc++.h>
// using namespace std;

// // long long main() {
// //     long long t;
// //     cin >> t;
// //     while (t--) {
// //         long long n, m;
// //         cin >> n >> m;
// //         vector<long long> petals(n);
// //         for (long long i = 0; i < n; ++i) {
// //             cin >> petals[i];
// //         }

// //         sort(petals.begin(), petals.end());

// //         long long max_petals = 0, current_cost = 0;
// //         long long start = 0;

// //         for (long long end = 0; end < n; ++end) {
// //             current_cost += petals[end];

// //             while (current_cost > m || (end > start && petals[end] - petals[start] > 1)) {
// //                 current_cost -= petals[start];
// //                 ++start;
// //             }

// //             max_petals = max(max_petals, current_cost);
// //         }

// //         cout << max_petals << endl;
// //     }

// //     return 0;
// // }




long long main(){
    set<vector<long long>>s;
    // v is given (toshya bkl)
    for(auto &it : v){
        s.insert(it);
    }

    vector<vector<long long>> ans;
    for(auto it : v){
        if(s.find(it) != s.end()){
            ans.push_back(it);
            s.erase(it);
        }
    }

    return ans;

}


#include <bits/stdc++.h>
using namespace std;

long long main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<long long> petals(n);
        for (long long i = 0; i < n; ++i) {
            cin >> petals[i];
        }

        sort(petals.begin(), petals.end());

        long long max_petals = 0, current_cost = 0;
        long long start = 0;

        for (long long end = 0; end < n; ++end) {
            current_cost += petals[end];

            while (current_cost > m || (end > start && petals[end] - petals[start] > 1)) {
                current_cost -= petals[start];
                ++start;
            }

            max_petals = max(max_petals,current_cost);
        }

        cout << max_petals << endl;
    }

    return 0;
}
