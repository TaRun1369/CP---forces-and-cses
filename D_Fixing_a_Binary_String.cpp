



#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;



long long main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n,k;
        cin >> n>>k;

        string s;
        cin>>s;
        long long p = n;
        long long tt = 1;
        for(long long i = 0;i<n-1;i++){
            cout<<"ind - "<<i<<" tt - "<<tt<<endl;
            if(s[i] != s[i+1] ){
                if(tt != k){
                p = i;
                break;
                }
                else tt = 1;
                
            }
            // else if(tt == k){ tt = 1;}
            else tt++;
        }
        string temp,sub;
        if(p != n){
         temp = s.substr(p+1,n-p - 1);sub = s.substr(0,p+1);
         }
        else{ 
            temp = s;
            sub = "";
        }
        // cout<<temp<<endl;
         
        reverse(sub.begin(),sub.end());
        temp += sub;
        cout<<temp<<endl;
        vector<long long> v;
        for(long long i = 0;i<n;i++){

        }
        
    }
    return 0;
}


// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // #include <climits>
// // using namespace std;

// // long long main() {
// //     long long t;
// //     cin >> t;

// //     while (t--) {
// //         long long n, k;
// //         cin >> n >> k;

// //         string s;
// //         cin >> s;

// //         long long j = n - 1;
// //         long long eo = 0, ez = 0;

// //         // Count ending 1s
// //         while (j >= 0 && s[j] == '1') {
// //             eo++;
// //             j--;
// //         }
        
// //         j = n - 1;

// //         // Count ending 0s
// //         while (j >= 0 && s[j] == '0') {
// //             ez++;
// //             j--;
// //         }

// //         long long coi = 0, czi = 0;
// //         long long co = 0, cz = 0;

// //         for (long long i = 0; i < n; i++) {
// //             if (s[i] == '1') {
// //                 long long tco = 0;
// //                 long long ind = i;
// //                 while (i < n && s[i] == '1') {
// //                     i++;
// //                     tco++;
// //                 }
// //                 if (tco >= co) {
// //                     co = tco;
// //                     coi = ind;
// //                 }
// //             } else {
// //                 long long tcz = 0;
// //                 long long ind = i;
// //                 while (i < n && s[i] == '0') {
// //                     i++;
// //                     tcz++;
// //                 }
// //                 if (tcz >= cz) {
// //                     cz = tcz;
// //                     czi = ind;
// //                 }
// //             }
// //         }

// //         if (max(cz, co) < k) {
// //             cout << -1 << endl;
// //         } else {
// //             if (cz >= k) {
// //                 long long count = 0;
// //                 long long j = czi - 1;
// //                 while (j >= 0 && s[j] == '1') {
// //                     count++;
// //                     j--;
// //                 }
// //                 count += eo;

// //                 if (count < k) {
// //                     cout << -1 << endl;
// //                 } else {
// //                     cout << czi << endl;
// //                 }
// //             } else {
// //                 long long count = 0;
// //                 long long j = coi - 1;
// //                 while (j >= 0 && s[j] == '0') {
// //                     count++;
// //                     j--;
// //                 }
// //                 count += ez;

// //                 if (count < k) {
// //                     cout << -1 << endl;
// //                 } else {
// //                     cout << coi  << endl;
// //                 }
// //             }
// //         }
// //     }
// //     return 0;
// // }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;

// bool is_k_proper(const string& s, long long k) {
//     for (long long i = 0; i < k; ++i) {
//         if (s[i] != s[0]) return false;
//     }
//     for (long long i = k; i < s.size(); ++i) {
//         if (s[i] == s[i - k]) return false;
//     }
//     return true;
// }

// string apply_operations(const string& s, long long p) {
//     string reversed = s.substr(0, p);
//     reverse(reversed.begin(), reversed.end());
//     string shifted = s.substr(p) + reversed;
//     return shifted;
// }

// long long find_p_to_make_k_proper(const string& s, long long n, long long k) {
//     for (long long p = 1; p <= n; ++p) {
//         string transformed = apply_operations(s, p);
//         if (is_k_proper(transformed, k)) {
//             return p;
//         }
//     }
//     return -1;
// }

// long long main() {
//     long long t;
//     cin >> t;

//     while (t--) {
//         long long n, k;
//         cin >> n >> k;

//         string s;
//         cin >> s;

//         long long result = find_p_to_make_k_proper(s, n, k);
//         cout << result << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;

// long long main() {
//     long long t;
//     cin >> t;

//     while (t--) {
//         long long n, k;
//         cin >> n >> k;

//         string s;
//         cin >> s;

//         // Check the initial string first
//         bool initial_proper = true;
//         for (long long i = 0; i < k; ++i) {
//             if (s[i] != s[0]) {
//                 initial_proper = false;
//                 break;
//             }
//         }
//         for (long long i = k; i < n && initial_proper; ++i) {
//             if (s[i] == s[i - k]) {
//                 initial_proper = false;
//             }
//         }

//         // If the string is already k-proper, we still need to perform an operation
//         if (initial_proper) {
//             cout << k << endl;
//             continue;
//         }

//         // Try to find a p that can make the string k-proper
//         bool found = false;
//         for (long long p = 1; p <= n && !found; ++p) {
//             string reversed = s.substr(0, p);
//             reverse(reversed.begin(), reversed.end());
//             string transformed = s.substr(p) + reversed;

//             bool is_proper = true;
//             for (long long i = 0; i < k; ++i) {
//                 if (transformed[i] != transformed[0]) {
//                     is_proper = false;
//                     break;
//                 }
//             }
//             for (long long i = k; i < n && is_proper; ++i) {
//                 if (transformed[i] == transformed[i - k]) {
//                     is_proper = false;
//                 }
//             }

//             if (is_proper) {
//                 cout << p << endl;
//                 found = true;
//             }
//         }

//         if (!found) {
//             cout << -1 << endl;
//         }
//     }

//     return 0;
// }
