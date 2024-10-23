// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
 

//  long long lcm(ll long long a, ll long long b)
// {
//     return (a / gcd(a, b)) * b;
// }
 
// long long main() {
//     long long t;
//     cin >> t;
 
//     while (t--) {
//         long long n;
//         cin>>n;
//         vector<long long> v(n);
//         long long l = 1;
//         long long maxi = long long_MIN;
//         for(long long i = 0;i<n;i++){ cin>>v[i];
//             l = lcm(l,v[i]);
//             maxi = max(maxi,v[i]);
//         }

//         vector<long long> ans(n);
//         long long sum  = 0;
//         for(long long i = 0;i<n;i++){
//             ans[i] = l/v[i];
//             sum +=ans[i];
//         }

//         if(sum >= maxi) cout<<-1<<endl;
//         else {
//             for(auto it : ans) cout<<it<<" ";
//             cout<<endl;
//         }

        

        
        
//     }
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

long long main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        long long l = 1;
        long long maxi = long long_MIN;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            l = lcm(l, v[i]);
            maxi = max(maxi, v[i]);
        }

        vector<long long> ans(n);
        long long sum = 0;
        for (long long i = 0; i < n; i++) {
            ans[i] = l / v[i];
            sum += ans[i];
        }

        if (sum >= l) {
            cout << -1 << endl;
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
