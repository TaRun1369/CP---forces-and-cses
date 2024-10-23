// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
// #define ll long long
 
// long long recur(long long ind,long long mul,long long n,vector<long long> &v){
//     if(ind > n) return 0;
//     // cout<<ind<<endl;
//     long long take = 0,ntake = 0, ntake2 = 0;
//     // take 
//     if(((ind)*mul - 1 )< n &&  v[(ind*mul) - 1] > v[ind - 1])
//     take = 1+ recur(ind*mul,2,n,v);

//     ntake = recur(ind,mul + 1,n,v);
//     ntake2 = recur(ind + 1,2,n,v);

//     // cout<<take<<" "<<ntake<<" "<<ntake2<<endl;
//     return max(ntake2,max(take,ntake));
// }


// long long main() {
//     long long t;
//     cin >> t;
 
//     while (t--) {
//        long long n;
//        cin>> n;
//        vector<long long> v(n);
//        for(long long i = 0;i<n;i++) cin>>v[i];
//         cout<<1+recur(1,2,n,v)<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// long long recur(long long ind, long long n, vector<long long>& v) {
//     long long max_length = 1;  // The minimum length is 1 (the element itself)

//     // Explore multiples of the current index + 1 (1-based index to 0-based)
//     for (long long next = 2 * (ind + 1); next <= n; next += (ind + 1)) {
//         if (v[next - 1] > v[ind]) {
//             max_length = max(max_length, 1 + recur(next - 1, n, v));
//         }
//     }

//     return max_length;  // Return the maximum length for the current index
// }

// long long findMaxModels(long long n, vector<long long>& v) {
//     long long max_models = 1;  // The minimum length is 1 (single element sequence)

//     // Compute the maximum beautiful subsequence starting from each index
//     for (long long i = 0; i < n; ++i) {
//         max_models = max(max_models, recur(i, n, v));
//     }

//     return max_models;
// }

// long long main() {
//     long long t;
//     cin >> t;

//     while (t--) {
//         long long n;
//         cin >> n;
//         vector<long long> v(n);
//         for (long long i = 0; i < n; ++i) {
//             cin >> v[i];
//         }

//         // Output the result for the current query.
//         cout << findMaxModels(n, v) << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

long long recur(long long ind, long long n, vector<long long>& v, vector<long long>& memo) {
    if (memo[ind] != -1) return memo[ind];  // Return the memoized result if available

    long long max_length = 1;  // The minimum length is 1 (the element itself)

    // Explore multiples of the current index + 1 (1-based index to 0-based)
    for (long long next = 2 * (ind + 1); next <= n; next += (ind + 1)) {
        if (v[next - 1] > v[ind]) {
            max_length = max(max_length, 1 + recur(next - 1, n, v, memo));
        }
    }

    return memo[ind] = max_length;  // Store the result in memo before returning
}

long long findMaxModels(long long n, vector<long long>& v) {
    vector<long long> memo(n, -1);  // Initialize memo array with -1

    long long max_models = 1;  // The minimum length is 1 (single element sequence)

    // Compute the maximum beautiful subsequence starting from each index
    for (long long i = 0; i < n; ++i) {
        max_models = max(max_models, recur(i, n, v, memo));
    }

    return max_models;
}

long long main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; ++i) {
            cin >> v[i];
        }

        // Output the result for the current query.
        cout << findMaxModels(n, v) << endl;
    }

    return 0;
}
