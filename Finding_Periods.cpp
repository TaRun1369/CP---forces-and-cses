// #include<bits/stdc++.h>
// using namespace std;
//  #define long long long long

// long long n;
// const long long m = 1e9 + 7;
// const long long p = 31; // prime
// vector<long long>power;
// vector<long long> hashh;
// // itna he hai hashing
//  void preprocess(const string &s){
//     long long n = s.size();
//     for(long long i = 1;i<= n;i++){
//         power[i] = (power[i-1]*p)%m;
//     }

//      for(long long i = 1;i<=n;i++){
//         hashh[i] = (hashh[i-1]*p + s[i-1])%m;
//     }
//  }

//  long long gethash(long long l,long long r){
//     long long h = (hashh[r+1] - (power[r-l+1]*hashh[l])%m + m)%m;
//     return h;
//  }

//  void findperiods(string &s){
//     long long n = s.size();
//     for(long long i = 0;i<n;i++){ // i is ending index of prefix we r choosing to check

//         long long runidx = 0;
//         bool check = true;
//         while(runidx < n){
//             long long len = min(i+1,n - runidx); // abcde ke liye d se chalu hoke len 3 nhi ho sakta isliye ye likha
//             check &= (gethash(0,len-1) == gethash(runidx,runidx+len-1));
//             runidx+=len;
//         }
//         if(check) cout<<i+1<<" ";
//     }
//  }
//  long long32_t main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     string s;
//     // cin>>s;
//     getline(cin,s);
//     long long n = s.size();
//      power.assign(n+1,1);
//     hashh.assign(n+10,0);
//     preprocess(s);
//     findperiods(s);

//  }


//  // // // neeche ka chalta hai 

// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define long long long long

// // // long long get_hash(long long l, long long r, vector<long long>& hash, vector<long long>& power, long long M) {
// // //     long long h = (hash[r + 1] - (power[r - l + 1] * hash[l]) % M + M) % M;
// // //     return h;
// // // }

// // // long long32_t main() {
// // //     ios::sync_with_stdio(0);
// // //     cin.tie(0);

// // //     string s;
// // //     getline(cin, s);
// // //     long long n = s.length();

// // //     long long P = 31;
// // //     long long M = 1000000007;

// // //     vector<long long> power(n + 5, 1);
// // //     for(long long i = 1; i < n; i++) {
// // //         power[i] = (power[i - 1] * P) % M;
// // //     }

// // //     vector<long long> hash(n + 10, 0);
// // //     for(long long i = 1; i <= n; i++) {
// // //         hash[i] = (hash[i - 1] * P + s[i - 1]) % M;
// // //     }

// // //     for(long long i = 0; i < n; i++) {
// // //         long long runIdx = 0;
// // //         bool ok = true;
// // //         while(runIdx < n) {
// // //             long long len = min(i + 1, n - runIdx);
// // //             ok &= (get_hash(0, len - 1, hash, power, M) == get_hash(runIdx, runIdx + len - 1, hash, power, M));
// // //             runIdx += len;
// // //         }
// // //         if(ok) {
// // //             cout << i + 1 << " ";
// // //         }
// // //     }

// // //     return 0;
// // // }




// // // neeche ka chalta hai 
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define long long long long

// // const long long MOD = 1e9 + 7;
// // const long long P = 31;

// // vector<long long> power;
// // vector<long long> hashh;

// // void preprocess(const string &s) {
// //     long long n = s.size();
// //     for (long long i = 1; i <= n; i++) {
// //         power[i] = (power[i - 1] * P) % MOD;
// //     }

// //     for (long long i = 1; i <= n; i++) {
// //         hashh[i] = (hashh[i - 1] * P + s[i - 1]) % MOD;
// //     }
// // }

// // long long gethash(long long l, long long r) {
// //     long long h = (hashh[r + 1] - (power[r - l + 1] * hashh[l]) % MOD + MOD) % MOD;
// //     return h;
// // }

// // void findperiods(const string &s) {
// //     long long n = s.size();
// //     for (long long i = 0; i < n; i++) {
// //         long long runidx = 0;
// //         bool check = true;
// //         while (runidx < n) {
// //             long long len = min(i + 1, n - runidx);
// //             check &= (gethash(0, len - 1) == gethash(runidx, runidx + len - 1));
// //             runidx += len;
// //         }
// //         if (check) {
// //             cout << i + 1 << " ";
// //         }
// //     }
// // }

// // long long32_t main() {
// //     ios::sync_with_stdio(0);
// //     cin.tie(0);
    
// //     string s;
// //     getline(cin, s);
// //     long long n = s.size();
    
// //     power.assign(n + 1, 1);
// //     hashh.assign(n + 1, 0);
    
// //     preprocess(s);
// //     findperiods(s);

// //     return 0;
// // }
#include<bits/stdc++.h>
#include <algorithm>  // For std::max_element
using namespace std;

bool checkIfSumEqualsMax(int arr[], int len) {
    long long sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    
    int maxi = *std::max_element(arr, arr + len);
    
    if (sum - maxi == maxi) {
        return true;
    }
    
    return false;
}
int main(){
   int arr[] = {3,5,16,1,2};
   if(checkIfSumEqualsMax(arr,5) == true) cout<<"true"<<endl;
   // cout<<<<endl;
}