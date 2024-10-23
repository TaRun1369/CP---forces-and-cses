// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // vector<long long> ans(n+1,0);
// // // // vector<long long> aans;
// // // // void recur(long long end,long long jump,vector<long long> &plat,long long pind){
// // // //     if(pind == plat.size()) return;
// // // //     if(end == 0){
// // // //        aans = ans;
// // // //         return;
// // // //     }

// // // //     for(long long i = 1;i<jump;i++){
// // // //         for(long long j = end;j >= (max(0,end -i));j--){
// // // //             ans[j] = i;
// // // //         }
// // // //         recur(end - i - plat[pind] + 1,jump,plat,pind+1);
// // // //         for(long long j = end;j >= (max(0,end - i));j--){
// // // //             ans[j] = 0;
// // // //         }
// // // //     }


// // // // }
// // // // long long main(){
// // // //     long long a,b;
// // // //     cin>>a>>b;
// // // //     vector<long long> c(n);
// // // //     long long n;
// // // //     cin>>n;
// // // //     for(long long i = 0;i<n;i++){
// // // //         long long x;
// // // //         cin>>x;
// // // //         c[i] = x;
// // // //     }

// // // //     recur(a,b,c,0);

// // // //     for(auto it : aans){
// // // //         cout<<it<<" ";
// // // //     }
// // // // }
// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // vector<long long> ans; 
// // // vector<long long> aans;

// // // void recur(long long end, long long jump, vector<long long> &plat, long long pind,long long siz) {
// // //     if (pind == plat.size()) {
// // //         if (end == siz) {
// // //             aans = ans;
// // //         }
// // //         return;
// // //     }

// // //     for (long long i = 1; i <= jump; i++) {
// // //         if (end - i - plat[pind] + 1 >= 0) {
// // //             for (long long j = end; j < end + plat[pind]; j++) {
// // //                 ans[j] = pind + 1;
// // //             }
// // //             recur(end + i + plat[pind] - 1, jump, plat, pind + 1);
// // //             for (long long j = end; j < end + plat[pind]; j++) {
// // //                 ans[j] = 0;
// // //             }
// // //         }
// // //     }
// // // }

// // // long long main() {
// // //     long long a, b;
// // //     cin >> a >> b;
// // //     long long n;
// // //     cin >> n;
// // //     vector<long long> c(n);
// // //     ans.resize(a + 1, 0);

// // //     for (long long i = 0; i < n; i++) {
// // //         long long x;
// // //         cin >> x;
// // //         c[i] = x;
// // //     }

// // //     recur(0, b, c, 0,a);

// // //     if (!aans.empty()) {
// // //         for (auto it : aans) {
// // //             cout << it << " ";
// // //         }
// // //     } else {
// // //         cout << "No valid configuration found";
// // //     }

// // //     return 0;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // vector<long long> ans; 
// // vector<long long> aans;

// // void recur(long long end, long long jump, vector<long long> &plat, long long pind, long long siz) {
// //     if (pind == plat.size()) {
// //         if (end == siz) {
// //             aans = ans;
// //         }
// //         return;
// //     }

// //     for (long long i = 1; i <= jump; i++) {
// //         if (end + i + plat[pind] - 1 <= siz) {
// //             for (long long j = end + i; j < end + i + plat[pind]; j++) {
// //                 ans[j] = pind + 1;
// //             }
// //             recur(end + i + plat[pind] - 1, jump, plat, pind + 1, siz);
// //             for (long long j = end + i; j < end + i + plat[pind]; j++) {
// //                 ans[j] = 0;
// //             }
// //         }
// //     }
// // }

// // long long main() {
// //     long long a, b;
// //     cin >> a >> b;
// //     long long n;
// //     cin >> n;
// //     vector<long long> c(n);
// //     ans.resize(a + 1, 0);

// //     for (long long i = 0; i < n; i++) {
// //         cin >> c[i];
// //     }

// //     recur(0, b, c, 0, a);

// //     // if (!aans.empty()) {
// //     //     for (auto it : aans) {
// //     //         cout << it << " ";
// //     //     }
// //     // } else {
// //     //     // If no valid configuration is found, return a vector with -1
// //     //     cout << "-1";
// //     // }
// // vector<long long> res;
// //     for(long long i = 1;i<=a;i++){
// //         res.push_back(aans[i]);
// //     }

// //     for(auto it : res) cout<<it<<" ";

// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// vector<long long> ans; 
// vector<long long> aans;

// void recur(long long end, long long jump, vector<long long> &plat, long long pind, long long siz) {
//     if (pind == plat.size()) {
//         aans = ans;
//         return;
//     }

//     for (long long i = 1; i <= jump; i++) {
//         if (end + i + plat[pind] - 1 <= siz) {
//             for (long long j = end + i; j < end + i + plat[pind]; j++) {
//                 ans[j] = pind + 1;
//             }
//             recur(end + i + plat[pind] - 1, jump, plat, pind + 1, siz);
//             for (long long j = end + i; j < end + i + plat[pind]; j++) {
//                 ans[j] = 0;
//             }
//         }
//     }
// }

// long long main() {
//     long long a, b;
//     cin >> a >> b;
//     long long n;
//     cin >> n;
//     vector<long long> c(n);
//     ans.resize(a + 1, 0);

//     for (long long i = 0; i < n; i++) {
//         cin >> c[i];
//     }

//     recur(0, b, c, 0, a);

//     if (!aans.empty() && aans[a] == 0) {  
//         for (auto it : aans) {
//             cout << it << " ";
//         }
//     } else {
//         cout << "-1";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<long long> ans;
vector<long long> aans;

bool recur(long long start, long long jump, vector<long long> &plat, long long pind, long long siz) {
    if (pind == plat.size()) {
        aans = ans;
        return true;
    }

    for (long long i = start + jump; i + plat[pind] - 1 <= siz; i++) {
        for (long long j = i; j < i + plat[pind]; j++) {
            ans[j] = pind + 1;
        }
        if (recur(i + plat[pind] - 1, jump, plat, pind + 1, siz)) {
            return true;
        }
        for (long long j = i; j < i + plat[pind]; j++) {
            ans[j] = 0;
        }
    }

    return false;
}

long long main() {
    long long a, b;
    cin >> a >> b;
    long long n;
    cin >> n;
    vector<long long> c(n);
    ans.resize(a + 1, 0);

    for (long long i = 0; i < n; i++) {
        cin >> c[i];
    }

    if (!recur(0, b, c, 0, a)) {
        cout << "-1";
    } else {
        for (long long i = 1; i <= a; i++) {
            cout << ans[i] << " ";
        }
    }

    return 0;
}
