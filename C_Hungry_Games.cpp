
// #include <bits/stdc++.h>
// using namespace std;

// long long M = 1e9 + 7;

// long long main() {
//     long long t;
//     cin >> t;
//     while (t--) {
//         long long n, x;
//         cin >> n >> x;
//         // x++;
//         // cout<<"x - "<<x<<endl;
//         vector<long long> ip(n + 1, 0);  
//         for (long long i = 0; i < n; i++) cin >> ip[i];
//         long long nhibannsakte = 0;
//         unordered_map<long long, long long> mp;
        
//         long long pref = 0;  
//         // mp[pref % x]++;
//         for (long long i = 0; i < n; i++) {
//             pref += ip[i];
//             if(ip[i] > x && i != 0) nhibannsakte++;
//             if(pref > x){
//                 pref = 0;
//                 nhibannsakte++;
//             }

//             mp[pref]++;
//         }
        
//         for (auto it : mp) {
//             // cout<<it.first<<"  map  "<<it.second<<endl;
//             // if (it.first == 0) nhibannsakte += (it.second);
//             nhibannsakte += (it.second * (it.second - 1)) / 2; // nC2
//             // cout<<"count - "<<nhibannsakte<<endl;
//         }
        
//         long long tot = n * (n + 1) / 2;
//         cout << tot - nhibannsakte << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

long long main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> ip(n);  
        for (long long i = 0; i < n; i++) cin >> ip[i];
        
        long long total_subsegments = n * (n + 1) / 2;
        long long valid_subsegments = 0;
        unordered_map<long long, long long> mp;

        long long pref = 0;
        
        for (long long i = 0; i < n; i++) {
            pref += ip[i];
            long long mod_val = pref % x;

            if (mod_val < 0) mod_val += x; // Handle negative modulo

            if (mod_val == 0) {
                valid_subsegments += mp[mod_val];
            } else {
                valid_subsegments += mp[mod_val] + 1;
            }
            
            mp[mod_val]++;
        }

        cout << total_subsegments - valid_subsegments << endl;
    }
    return 0;
}
