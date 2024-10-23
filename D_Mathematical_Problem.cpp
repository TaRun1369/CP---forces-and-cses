// // // // // #include <iostream>
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
 
 
  


// // // // // long long main() {
// // // // //     long long t;
// // // // //     cin >> t;
 
// // // // //     while (t--) {
// // // // //         long long n;
// // // // //         cin>>n;
// // // // //         string s;
// // // // //         cin>>s;
// // // // //  long long cz = 0,fs = 0,fe = 0;
// // // // //  long long minind = 0;
// // // // //  for(long long i = 0;i<n-1;i++){
// // // // //                 if(s[i] == '0')cz++;
// // // // // }
// // // // //   if(s[0] == '0')fs = 1;
// // // // //     if(s[n-1] == '0') fe = 1;
    
// // // // //         if(n <= 2){
// // // // //             cout<<stoi(s)<<endl;
// // // // //         }
// // // // //         else if(n == 3){
// // // // //             if(fs == 1 || fe == 1) cout<<0<<endl;

// // // // //             else {
// // // // //                 cout<<mini(stoi(s[0]) * stoi(s.substr(1,2)), stoi(s[2]) * stoi(0,2))<<endl;
// // // // //             }
// // // // //         }
// // // // //         else{
// // // // //             if(cz >= 1) cout<<0<<endl;
// // // // //             else {
// // // // //                 long long mini = long long_MAX;
// // // // //                 for(long long i = 0;i<n-1;i++){
// // // // //                     string t = s[i];
// // // // //                     if(s[i] == '0')cz++;
// // // // //                     t += s[i+1];
// // // // //                     // mini = min(stoi(t),mini);
// // // // //                     if(mini > stoi(t)){
// // // // //                         minind = i;
// // // // //                     }
// // // // //                 }
// // // // //                 long long ans = 0;
// // // // //                 for(long long i = 0;i<n;i++){
// // // // //                     if(i == minind){
// // // // //                         if(ans == 1){
// // // // //                             ans *= mini;
// // // // //                         }
// // // // //                         else ans += mini;
// // // // //                         i++;
// // // // //                     }
// // // // //                     else{
// // // // //                         if(ans == 1){
// // // // //                             ans *= (s[i] - '0');
// // // // //                         }
// // // // //                         else ans +=(s[i] - '0');
// // // // //                     }
// // // // //                 }
// // // // //                 cout<<ans<<endl;
// // // // //             }
// // // // //         }

 
// // // // //     }
// // // // //     return 0;
// // // // // }



// // // // #include <iostream>
// // // // #include <climits>
// // // // using namespace std;

// // // // long long main() {
// // // //     long long t;
// // // //     cin >> t;

// // // //     while (t--) {
// // // //         long long n;
// // // //         cin >> n;
// // // //         string s;
// // // //         cin >> s;
        
// // // //         long long cz = 0, fs = 0, fe = 0;
// // // //         long long minind = 0;

// // // //         for (long long i = 0; i < n - 1; i++) {
// // // //             if (s[i] == '0') cz++;
// // // //         }
        
// // // //         if (s[0] == '0') fs = 1;
// // // //         if (s[n - 1] == '0') fe = 1;

// // // //         if (n <= 2) {
// // // //             cout << stoi(s) << endl;
// // // //         } else if (n == 3) {
// // // //             if (fs == 1 || fe == 1) {
// // // //                 cout << 0 << endl;
// // // //             } else {
// // // //                 cout << min(stoi(s.substr(0, 1)) * stoi(s.substr(1, 2)), stoi(s.substr(2, 1)) * stoi(s.substr(0, 2))) << endl;
// // // //             }
// // // //         } else {
// // // //             if (cz >= 1) {
// // // //                 cout << 0 << endl;
// // // //             } else {
// // // //                 long long mini = long long_MAX;
// // // //                 for (long long i = 0; i < n - 1; i++) {
// // // //                     string t = s.substr(i, 2);
// // // //                     if (stoi(t) < mini) {
// // // //                         mini = stoi(t);
// // // //                         minind = i;
// // // //                     }
// // // //                 }
// // // //                 long long ans = 1;  // Initialize to 1 because we are multiplying
// // // //                 for (long long i = 0; i < n; i++) {
// // // //                     if (i == minind) {
// // // //                         ans *= mini;
// // // //                         i++;  // Skip the next character because it's part of the minimum pair
// // // //                     } else {
// // // //                         ans *= (s[i] - '0');
// // // //                     }
// // // //                 }
// // // //                 cout << ans << endl;
// // // //             }
// // // //         }
// // // //     }
// // // //     return 0;
// // // // }


// // // #include <iostream>
// // // #include <climits>
// // // #include <vector>
// // // #include <string>
// // // using namespace std;

// // // // Function to edatauate the expression with correct precedence
// // // long long edatauate_expression(const string &expression) {
// // //     vector<long long> terms;
// // //     long long current_term = 1;
// // //     char last_operator = '*';
// // //     for (char c : expression) {
// // //         if (c == '+' || c == '*') {
// // //             if (last_operator == '+') {
// // //                 terms.push_back(current_term);
// // //                 current_term = 1;
// // //             }
// // //             last_operator = c;
// // //         } else {
// // //             if (last_operator == '*') {
// // //                 current_term *= (c - '0');
// // //             } else {
// // //                 current_term += (c - '0');
// // //             }
// // //         }
// // //     }
// // //     terms.push_back(current_term);

// // //     long long result = 0;
// // //     for (long long term : terms) {
// // //         result += term;
// // //     }
// // //     return result;
// // // }

// // // // Function to generate all possible expressions and find the minimum result
// // // long long find_min_result(const string &s, long long n) {
// // //     long long min_result = LLONG_MAX;
// // //     long long num_operators = n - 2;
// // //     long long max_combinations = 1 << num_operators;

// // //     for (long long mask = 0; mask < max_combinations; ++mask) {
// // //         string expression = "";
// // //         for (long long i = 0; i < num_operators; ++i) {
// // //             expression += s[i];
// // //             if (mask & (1 << i)) {
// // //                 expression += '*';
// // //             } else {
// // //                 expression += '+';
// // //             }
// // //         }
// // //         expression += s.substr(num_operators);

// // //         long long result = edatauate_expression(expression);
// // //         if (result < min_result) {
// // //             min_result = result;
// // //         }
// // //     }
// // //     return min_result;
// // // }

// // // long long main() {
// // //     long long t;
// // //     cin >> t;

// // //     while (t--) {
// // //         long long n;
// // //         cin >> n;
// // //         string s;
// // //         cin >> s;

// // //         cout << find_min_result(s, n) << endl;
// // //     }
// // //     return 0;
// // // }


// // #include <iostream>
// // #include <climits>
// // using namespace std;

// // long long main() {
// //     long long t;
// //     cin >> t;

// //     while (t--) {
// //         long long n;
// //         cin >> n;
// //         string s;
// //         cin >> s;

// //         long long cz = 0;
// //         for (char c : s) {
// //             if (c == '0') cz++;
// //         }

// //         if (n <= 2) {
// //             cout << stoi(s) << endl;
// //         } else if (n == 3) {
// //             if (s[0] == '0' || s[n-1] == '0') {
// //                 cout << 0 << endl;
// //             } else {
// //                 long long num1 = stoi(s.substr(0, 1)) * stoi(s.substr(1, 2));
// //                 long long num2 = stoi(s.substr(2, 1)) * stoi(s.substr(0, 2));
// //                 long long num3 = stoi(s.substr(0, 1)) + stoi(s.substr(1, 2));
// //                 long long num4 = stoi(s.substr(2, 1)) + stoi(s.substr(0, 2));
// //                 cout << min({num1, num2, num3, num4}) << endl;
// //             }
// //         } else {
// //             if (cz >= 1) {
// //                 cout << 0 << endl;
// //             } else {
// //                 long long mini = long long_MAX;
// //                 for (long long i = 0; i < n - 1; i++) {
// //                     string t = s.substr(i, 2);
// //                     long long dataue = stoi(t);
// //                     if (dataue < mini) {
// //                         mini = dataue;
// //                     }
// //                 }

// //                 long long ans = 1;
// //                 for (long long i = 0; i < n; i++) {
// //                     if (i == minind) {
// //                         ans *= mini;
// //                         i++;
// //                     } else {
// //                         ans *= (s[i] - '0');
// //                     }
// //                 }
// //                 cout << ans << endl;
// //             }
// //         }
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <climits>
// using namespace std;

// long long main() {
//     long long t;
//     cin >> t;

//     while (t--) {
//         long long n;
//         cin >> n;
//         string s;
//         cin >> s;

//         long long cz = 0;
//         for (char c : s) {
//             if (c == '0') cz++;
//         }

//         if (n <= 2) {
//             cout << stoi(s) << endl;
//         } else if (n == 3) {
//             if (s[0] == '0' || s[n-1] == '0') {
//                 cout << 0 << endl;
//             } else {
//                 long long num1 = stoi(s.substr(0, 1)) * stoi(s.substr(1, 2));
//                 long long num2 = stoi(s.substr(2, 1)) * stoi(s.substr(0, 2));
//                 long long num3 = stoi(s.substr(0, 1)) + stoi(s.substr(1, 2));
//                 long long num4 = stoi(s.substr(2, 1)) + stoi(s.substr(0, 2));
//                 cout << min({num1, num2, num3, num4}) << endl;
//             }
//         } else {
//             if (cz >= 1) {
//                 cout << 0 << endl;
//             } else {
//                 long long mini = long long_MAX;
//                 for (long long i = 0; i < n - 1; i++) {
//                     string t = s.substr(i, 2);
//                     long long dataue = stoi(t);
//                     if (dataue < mini) {
//                         mini = dataue;
//                     }
//                 }

//                 long long ans = 1;
//                 for (long long i = 0; i < n; i++) {
//                     if (i == minind) {
//                         ans *= mini;
//                         i++;
//                     } else {
//                         ans *= (s[i] - '0');
//                     }
//                 }
//                 cout << ans << endl;
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

long long main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        long long cz = 0;
        for (char c : s) {
            if (c == '0') cz++;
        }

        if (n <= 2) {
            cout << stoi(s) << endl;
        } else if (n == 3) {
            if (s[0] == '0' || s[n-1] == '0') {
                cout << 0 << endl;
            } else {
                long long num1 = stoi(s.substr(0, 1)) * stoi(s.substr(1, 2));
                long long num2 = stoi(s.substr(2, 1)) * stoi(s.substr(0, 2));
                long long num3 = stoi(s.substr(0, 1)) + stoi(s.substr(1, 2));
                long long num4 = stoi(s.substr(2, 1)) + stoi(s.substr(0, 2));
                cout << min({num1, num2, num3, num4}, [](long long a, long long b) { return a < b; }) << endl;
            }
        } else {
            if (cz >= 1) {
                cout << 0 << endl;
            } else {
                long long mini = long long_MAX;
                long long minind = 0;
                for (long long i = 0; i < n - 1; i++) {
                    string t = s.substr(i, 2);
                    long long dataue = stoi(t);
                    if (dataue < mini) {
                        mini = dataue;
                        minind = i;
                    }
                }
                long long ans = 1;
                for (long long i = 0; i < n; i++) {
                    if (i == minind) {
                        ans *= mini;
                        i++;
                    } else {
                        ans *= (s[i] - '0');
                    }
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}
