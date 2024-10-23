// // // #include <iostream>
// // // #include <climits>
// // // #include <algorithm>
// // // using namespace std;

// // // long long main() {
// // //     long long t;
// // //     cin >> t;

// // //     while (t--) {
// // //         long long n,k;
// // //         cin>>n>>k;
// // //         vector<long long> a(n);
// // //         for(long long i = 0;i<n;i++){
// // //             cin>>a[i];
// // //         }

// // //         sort(a.begin(),a.end());
// // //         vector<long long> b(n);

// // //         for(long long i = 0;i<n;i++){
// // //             if(i % 2 ==0){
// // //                 b[i/2] = a[i];
// // //             }
// // //             else{
// // //                 b[n-(i/2) - 1] = a[i];
// // //             }
// // //         }
// // //         for(auto it : b) cout<<it<<" ";
// // //         cout<<endl;
// // //         long long i = 0,j = n-1;
// // //         long long ans = 0;
// // //         long long f = 0;
// // //         while(i < j){
// // //             long long diff = b[j] - b[i];
// // //             if(diff % k != 0) {
// // //                 f = 1;
// // //                 break;
// // //             }
// // //             else{
// // //                 ans += (diff/k);
// // //             }
// // //         }
// // //         if(f == 1) cout<<-1<<endl;
// // //         else{
// // //             cout<<ans<<endl;
// // //         }

// // //     }
// // // }

// // #include <iostream>
// // #include <vector>
// // #include <unordered_map>
// // #include <cmath>

// // using namespace std;

// // long long main() {
// //     long long tc;
// //     cin>>tc;
// //     while(tc--){
// //     long long n, k;
// //     // cout << "Enter the number of elements (n) and the divisor (k): ";
// //     cin >> n >> k;

// //     vector<long long> a(n);
// //     // cout << "Enter the elements: ";
// //     for(long long i = 0; i < n; i++) {
// //         cin >> a[i];
// //     }

// //     unordered_map<long long, vector<long long>> remainder_map;
// //     for(long long i = 0; i < n; i++) {
// //         long long remainder = a[i] % k;
// //         remainder_map[remainder].push_back(a[i]);
// //     }

// //     long long total_operations = 0;

// //     for (auto &pair : remainder_map) {
// //         vector<long long> &vec = pair.second;
// //         long long size = vec.size();
// //         vector<long long> b(size);

// //         for(long long i = 0; i < size; i++) {
// //             if(i % 2 == 0) {
// //                 b[i / 2] = vec[i];
// //             } else {
// //                 b[size - (i / 2) - 1] = vec[i];
// //             }
// //         }

// //         long long start = 0;
// //         long long end = size - 1;
// //         long long operations = 0;

// //         while (start < end) {
// //             operations += abs(b[start] - b[end]) / k;
// //             start++;
// //             end--;
// //         }

// //         total_operations += operations;
// //     }
// //     cout<<total_operations<<endl;

   
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <cmath>
// #include <limits>

// using namespace std;

// long long calculate_operations(vector<long long> &vec, long long k) {
//     long long size = vec.size();
//     vector<long long> b(size);

//     for (long long i = 0; i < size; i++) {
//         if (i % 2 == 0) {
//             b[i / 2] = vec[i];
//         } else {
//             b[size - (i / 2) - 1] = vec[i];
//         }
//     }

//     long long start = 0;
//     long long end = size - 1;
//     long long operations = 0;

//     while (start < end) {
//         operations += abs(b[start] - b[end]) / k;
//         start++;
//         end--;
//     }

//     return operations;
// }

// long long main() {
//     long long t;
//     // cout << "Enter the number of test cases: ";
//     cin >> t;

//     while (t--) {
//         long long n, k;
//         cin >> n >> k;
//         vector<long long> a(n);

//         for (long long i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         unordered_map<long long, vector<long long>> remainder_map;
//         for (long long i = 0; i < n; i++) {
//             long long remainder = a[i] % k;
//             remainder_map[remainder].push_back(a[i]);
//         }

//         long long total_operations = 0;

//         for (auto &pair : remainder_map) {
//             vector<long long> &vec = pair.second;
//             long long size = vec.size();
//             if (size % 2 != 0 && k != 1) {
//                 total_operations = -1;
//                 break;
//             }
//             total_operations += calculate_operations(vec, k);
//         }

//         cout << total_operations << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to calculate the number of operations for a vector
long long calculate_operations(vector<long long>& vec, long long k) {
    long long size = vec.size();
    vector<long long> b(size);

    // Applying the specified rearrangement logic
    for (long long i = 0; i < size; i++) {
        if (i % 2 == 0) {
            b[i / 2] = vec[i];
        } else {
            b[size - (i / 2) - 1] = vec[i];
        }
    }

    long long start = 0;
    long long end = size - 1;
    long long operations = 0;

    // Calculating the number of operations using two polong longers
    while (start < end) {
        operations += abs(b[start] - b[end]) / k;
        start++;
        end--;
    }

    return operations;
}

long long main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Map to store elements grouped by remainder when divided by k
        unordered_map<long long, vector<long long>> remainder_map;

        // Grouping elements by their remainders
        for (long long i = 0; i < n; i++) {
            long long remainder = a[i] % k;
            remainder_map[remainder].push_back(a[i]);
        }

        long long total_operations = 0;
        bool possible = true;

        // Processing each group of elements with the same remainder
        for (auto &pair : remainder_map) {
            vector<long long>& vec = pair.second;
            long long size = vec.size();

            // If size is odd and k != 1, it's not possible to arrange all elements as required
            if (size % 2 != 0 && k != 1) {
                possible = false;
                break;
            }

            // Calculate operations for this group
            total_operations += calculate_operations(vec, k);
        }

        if (possible) {
            cout << total_operations << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
