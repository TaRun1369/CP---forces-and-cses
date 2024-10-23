// // #include <bits/stdc++.h>
// // using namespace std;
// // long long M = 1e9 + 7;
// // long long main() {
// //     long long t;
// //     cin >> t;
// //     while (t--) {
// //         long long n,k;
// //         cin>>n>>k;
// //         vector<long long > v;
// //         vector<long long> badelog(k);
// //         for(long long i = 0;i<n;i++){
// //             if(i < k){
// //                 cin>>badelog[i];
// //             }
// //             else{
// //                 long long a;
// //                 cin>>a;
// //                 v.push_back(a);
// //             }
// //         }

// //     sort(badelog.rbegin(),badelog.rend());
// //     sort(v.rbegin(),v.rend());
// //     long long i = 0,j = 0;
// //     long long f= 0;
// //      long long alice = 0,bob = 0;
// //     while(i < k && j < v.size()){
// //         if(f == 0){
// //             alice += badelog[i];
// //             alice %= M;
// //             i++;
// //             while(i < k){
// //                 alice += badelog[i];
// //                 alice %= M;
// //                 i++;
// //             }
// //             else{
// //                 alice += v[j];
// //                 alice %= M;
// //                 j++;
// //             }
// //             f = 1;
// //         }
// //         else{
// //             bob += badelog[i];
// //             i++;
// //             while(i < k ){
// //                 bob += badelog[i];
// //                 bob %= M;
// //                 i++;
// //             }
// //             else{
// //                 bob += v[j];
// //                 bob %= M;
// //                 j++;
// //             }
// //             f = 0;
// //         }

// //     }

// //     while(i < k){
// //         if(f == 0){
// //             alice += badelog[i];
// //             alice %= M;
// //             i++;
// //             f = 1;
// //         }
// //         else{
// //             bob += badelog[i];
// //             bob %= M;
// //             i++;
// //             f = 0;
// //         }
// //     }
// //     while(j < v.size()){
// //         if(f == 0){
// //             alice += v[j];
// //             alice %= M;
// //             j++;
// //             f = 1;
// //         }
// //         else{
// //             bob += v[j];
// //             bob %= M;
// //             j++;
// //             f = 0;
// //         }

// //      }
// //      cout<<alice<<" "<<bob<<endl;
// //     }
// // }

// #include <bits/stdc++.h>
// using namespace std;
// const long long M = 1e9 + 7;

// long long modInverse(long long a, long long m) {
//     long long m0 = m, t, q;
//     long long x0 = 0, x1 = 1;
//     if (m == 1) return 0;
//     while (a > 1) {
//         q = a / m;
//         t = m;
//         m = a % m, a = t;
//         t = x0;
//         x0 = x1 - q * x0;
//         x1 = t;
//     }
//     if (x1 < 0) x1 += m0;
//     return x1;
// }

// long long main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     long long t;
//     cin >> t;
//     while (t--) {
//         long long n, k;
//         cin >> n >> k;
//         vector<long long> special(k);
//         vector<long long> normal(n - k);
        
//         for (long long i = 0; i < k; ++i) {
//             cin >> special[i];
//         }
//         for (long long i = 0; i < n - k; ++i) {
//             cin >> normal[i];
//         }

//         sort(special.rbegin(), special.rend());
//         sort(normal.rbegin(), normal.rend());

//         long long alice = 0, bob = 0;
//         long long i = 0, j = 0;
//         bool aliceTurn = true;
        
//         while (i < k && j < n - k) {
//             if (aliceTurn) {
//                 alice = (alice + special[i]) % M;
//                 i++;
//                 while (i < k && aliceTurn) {
//                     alice = (alice + special[i]) % M;
//                     i++;
//                 }
//                 if (i < k) continue;
//                 aliceTurn = false;
//             } else {
//                 bob = (bob + special[i]) % M;
//                 i++;
//                 while (i < k && !aliceTurn) {
//                     bob = (bob + special[i]) % M;
//                     i++;
//                 }
//                 if (i < k) continue;
//                 aliceTurn = true;
//             }
//         }

//         while (i < k) {
//             if (aliceTurn) {
//                 alice = (alice + special[i]) % M;
//                 aliceTurn = false;
//             } else {
//                 bob = (bob + special[i]) % M;
//                 aliceTurn = true;
//             }
//             i++;
//         }
        
//         while (j < n - k) {
//             if (aliceTurn) {
//                 alice = (alice + normal[j]) % M;
//                 aliceTurn = false;
//             } else {
//                 bob = (bob + normal[j]) % M;
//                 aliceTurn = true;
//             }
//             j++;
//         }

//         cout << alice << " " << bob << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9 + 7;

// Function to compute modular inverse of a under modulo M using extended Euclidean algorithm
long long modInverse(long long a, long long m) {
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

long long main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> special(k);
        vector<long long> normal(n - k);
        
        for (long long i = 0; i < k; ++i) {
            cin >> special[i];
        }
        for (long long i = 0; i < n - k; ++i) {
            cin >> normal[i];
        }

        sort(special.rbegin(), special.rend());
        sort(normal.rbegin(), normal.rend());

        long long alice = 0, bob = 0;
        long long i = 0, j = 0;
        bool aliceTurn = true;
        
        // Handle the case where all balls are special
        if (k == n) {
            for (long long x : special) {
                alice = (alice + x) % M;
            }
        } else {
            // General case
            while (i < k || j < n - k) {
                if (aliceTurn) {
                    if (i < k) {
                        alice = (alice + special[i]) % M;
                        i++;
                        // Alice gets another turn if she picked a special ball
                    } else {
                        alice = (alice + normal[j]) % M;
                        j++;
                        aliceTurn = false; // Switch turn to Bob
                    }
                } else {
                    if (i < k) {
                        bob = (bob + special[i]) % M;
                        i++;
                        // Bob gets another turn if he picked a special ball
                    } else {
                        bob = (bob + normal[j]) % M;
                        j++;
                        aliceTurn = true; // Switch turn to Alice
                    }
                }
            }
        }

        cout << alice << " " << bob << endl;
    }
    return 0;
}
