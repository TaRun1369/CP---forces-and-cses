
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
 
// // // // // // #define long long long long long long
// // // // // #define vi vector<long long>
// // // // // #define vii vector<vector<long long>>
// // // // // #define vb vector<bool>
// // // // // #define pi pair<long long, long long>
// // // // // #define si set<long long>
// // // // // #define rep(var, l, r) for (long long var = l; var < r; var++)
 
// // // // // long long mod1 = 1000000007;
// // // // // #define float long double
// // // // //  typedef long long ll;


// // // // // long long main() {
// // // // //     long long tc;
// // // // //     cin >> tc;
// // // // //     while (tc--) {
// // // // //        long long n,m;
// // // // //        cin>>n>>m;
// // // // //        string x,s;
// // // // //        cin>>x>>s;
// // // // //        if(n>=m){
// // // // //         string temp = x+x;
// // // // //         cout<<temp.find(s)<<endl;
// // // // //        }
// // // // //        else{
// // // // //         string temp = x;
// // // // //         while(temp.size()<m){
// // // // //           temp+=x;
// // // // //         }
// // // // //         cout<<temp.find(s)<<endl;
// // // // //        }
// // // // //     }
// // // // //     return 0;
// // // // // }



// // // // // // void solve(long long tc)
// // // // // // {
// // // // // //     long long n,k;
// // // // // //     cin>>n>>k;
// // // // // //     ll ans = 0;
// // // // // //     for(long long i = 0;i<k;i++){
// // // // // //         ans = (ans*n)%mod1;
// // // // // //     }
// // // // // //     cout<<ans<<endl;

// // // // // // }
 
// // // // // // long long32_t main()
// // // // // // {
// // // // // //     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// // // // // //     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
// // // // // //     long long tc = 1;
// // // // // //     cin >> tc;
// // // // // //     while (tc--)
// // // // // //         solve(tc);
 
// // // // // //     return 0;
// // // // // // }

// // // // // // #include <iostream>
// // // // // // #include <cmath>
// // // // // // #include<bits/stdc++.h>
// // // // // // using namespace std;



 

// // // // // // long long main() {
   
// // // // // //     long long tc;
// // // // // //     cin>>tc;
// // // // // //     while(tc--){
     
        
// // // // // //     }
// // // // // //     return 0;
// // // // // // }

// // // // // // #include <iostream>
// // // // // // #include <set>
// // // // // // using namespace std;


// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // long long main() {
// // // // //     long long tc;
// // // // //     cin >> tc;
// // // // //     while (tc--) {
// // // // //         long long a,b,x1,y1,x2,y2;
// // // // //         cin>>a>>b>>x1>>y1>>x2>>y2;
// // // // //         long long maxx = max(a,b);
// // // // //         long long maxx2 = max(x1-x2,y1-y2);
// // // // //         maxx2 -=1;
// // // // //         if(abs(x1-x2) == abs(y1-y2) && a == b){
// // // // //             // cout<<1<<endl;
// // // // //              cout<<1<<endl;
            
// // // // //         }
// // // // //         else if(maxx2 < maxx){
// // // // //             cout<<0<<endl;
// // // // //         }
// // // // //         else{
// // // // //             cout<<2<<endl;
// // // // //         }
// // // // //     }
// // // // //     return 0;
// // // // // }


// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // long long main() {
// // // // //     long long tc;
// // // // //     cin >> tc;
// // // // //     while (tc--) {
// // // // //         long long a,b,x1,y1,x2,y2;
// // // // //         cin>>a>>b>>x1>>y1>>x2>>y2;
// // // // //         long long maxx = abs(max(a,b));
// // // // //         cout<<x1<<x2<<y1<<y2<<endl;
// // // // //         long long maxx2 = abs(max(abs(x1-x2),abs(y1-y2)));
// // // // //         maxx2 -=1;
// // // // //         cout<<"max  ";
// // // // //         cout<<maxx<<endl;
// // // // //         cout<<"maxx2 ";
// // // // //         cout<<maxx2<<endl;
// // // // //         if(abs(x1-x2) == abs(y1-y2) && a == b){
// // // // //             // cout<<1<<endl;
// // // // //              cout<<1<<endl;
            
// // // // //         }
// // // // //         else if(maxx2 < maxx){
// // // // //             cout<<"here"<<endl;
// // // // //             cout<<0<<endl;
// // // // //         }
// // // // //         else{
// // // // //             cout<<2<<endl;
// // // // //         }
// // // // //     }
// // // // //     return 0;
// // // // // }


// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // bool isVowel(char c){
// // // // //     if( c == 'a' || c == 'e'){
// // // // //         return true;
// // // // //     }
// // // // //     else{
// // // // //         return false;
// // // // //     }
// // // // // }

// // // // // long long main() {
// // // // //     long long t;
// // // // //     cin>>t;
// // // // //     while(t--){
// // // // //         long long n;
// // // // //         cin>>n;
// // // // //         string s;
// // // // //         cin>>s;
// // // // //         long long count = n;
// // // // //         long long cd = 0;
// // // // //         long long  i = 0;
// // // // //         string ans = s;
// // // // //         while(i < count){
// // // // //             if(isVowel(s[i]) == true && i < count - 1){
// // // // //                 string temp = ans.substr(0,i+cd) + s.substr(i,3) + "." + s.substr(i+3,s.length() - i - 3);
// // // // //                 ans = temp;
// // // // //                 i += 2;
// // // // //             }
// // // // //             else if(isVowel(s[i]) == false && i < count - 2){
// // // // //                 string temp = ans.substr(0,i+cd) + s.substr(i,2) + "." + s.substr(i+2,s.length() - i - 2);
// // // // //                 ans = temp;
// // // // //                 i++; 
// // // // //             }
// // // // //             i++;
// // // // //             cd++;
// // // // //         }
// // // // //         cout<<ans<<endl;
// // // // //     }
// // // // // }

// // // // // #include <iostream>
// // // // // #include <string>
// // // // // using namespace std;

// // // // // bool isVowel(char c) {
// // // // //     return (c == 'a' || c == 'e'); // Consider 'a' and 'e' as vowels
// // // // // }

// // // // // long long main() {
// // // // //     long long t;
// // // // //     cin >> t;

// // // // //     while (t--) {
// // // // //         long long n;
// // // // //         cin >> n;
// // // // //         string s;
// // // // //         cin >> s;

// // // // //         string ans = "";
// // // // //         for (long long i = 0; i < n;) {
// // // // //             ans += s[i];
// // // // //             if (isVowel(s[i])) {
// // // // //                 if (i + 2 < n) {
// // // // //                     ans += s.substr(i + 1, 2) + ".";
// // // // //                     i += 3;
// // // // //                 } else {
// // // // //                     break;
// // // // //                 }
// // // // //             } else {
// // // // //                 if (i + 1 < n) {
// // // // //                     ans += s.substr(i + 1, 1) + ".";
// // // // //                     i += 2;
// // // // //                 } else {
// // // // //                     break;
// // // // //                 }
// // // // //             }
// // // // //         }
// // // // //         cout << ans << endl;
// // // // //     }
// // // // //     return 0;
// // // // // }


// // // // #include <iostream>
// // // // #include <bits/stdc++.h>
// // // // using namespace std;



// // // // long long main() {
// // // //     long long t;
// // // //     cin >> t;

// // // //     while (t--) {
// // // //         long long n;
// // // //         cin >> n;
// // // //         long long maxi = 0;
// // // //         long long mini = 10e9+1;
// // // //         vector<vector<long long>> v;
// // // //         for(long long i = 0;i<n;i++){

// // // //         vector<long long> t;
// // // //         long long a,b;
// // // //         cin>>a>>b;
// // // //         t.push_back(a);
// // // //         t.push_back(b);
// // // //         if(a>maxi){
// // // //             maxi = a;
// // // //         }
// // // //         if(b<mini){
// // // //             mini = b;
// // // //         }
// // // //         if(a < mini){
// // // //             mini = a;
// // // //         }
// // // //         if(b>maxi){
// // // //             maxi = b;
// // // //         }
// // // //             v.push_back(t);
// // // //         }
          
// // // //     long long ans = 0;
// // // //     long long start = 0,end = 0;
// // // //     if(mini < 0){
// // // //         end = maxi + abs(mini);
// // // //         start = mini;
// // // //     }
// // // //     vector<long long> flag(end+1,0);
// // // //     long long prev = v[0][1] + abs(start);
// // // //     flag[v[0][1] + abs(start)] = 1;

// // // //     // long long cco = 0;
// // // //     for(long long i = 1;i<n;i++){
        
// // // //         ans += flag.accumulate(v[i][0] + abs(start),v[i][1] + abs(start),0ll);

// // // //     }
// // // //     cout<<ans<<endl;
// // // //     }
    
    
    
// // // //     return 0;
// // // // }


// // // #include <iostream>
// // // #include <vector>
// // // #include <bits/stdc++.h> // Include the algorithm library for std::accumulate
// // // #include <cmath>
// // // using namespace std;

// // // long long main() {
// // //     long long t;
// // //     cin >> t;

// // //     while (t--) {
// // //         long long n;
// // //         cin >> n;
// // //         long long maxi = 0;
// // //         long long mini = 10e9 + 1;
// // //         vector<vector<long long>> v;
        
// // //         for (long long i = 0; i < n; i++) {
// // //             vector<long long> t;
// // //             long long a, b;
// // //             cin >> a >> b;
// // //             t.push_back(a);
// // //             t.push_back(b);
// // //             if (a > maxi) {
// // //                 maxi = a;
// // //             }
// // //             if (b < mini) {
// // //                 mini = b;
// // //             }
// // //             if (a < mini) {
// // //                 mini = a;
// // //             }
// // //             if (b > maxi) {
// // //                 maxi = b;
// // //             }
// // //             v.push_back(t);
// // //         }

// // //         long long ans = 0;
// // //         long long start = 0, end = 0;
// // //         if (mini < 0) {
// // //             end = maxi + abs(mini);
// // //             start = mini;
// // //         }
// // //         vector<long long> flag(end + 1, 0);
// // //         long long prev = v[0][1] + abs(start);
// // //         flag[v[0][1] + abs(start)] = 1;

// // //         for (long long i = 1; i < n; i++) {
// // //             // Using accumulate to count the occurrences within the range
// // //             ans += accumulate(flag.begin() + v[i][0] + abs(start), flag.begin() + v[i][1] + abs(start) + 1, 0LL);
// // //         }
// // //         cout << ans << endl;
// // //     }
// // //     return 0;
// // // }


// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
 
 
 
// // long long main() {
// //     long long t;
// //     cin >> t;
 
// //     while (t--) {
// //         long long n;
// //         cin >> n;
// //         vector<long long> ip;
// //         for(long long i = 0;i<n;i++){
// //             long long a;
// //             cin>>a;
// //             ip.push_back(a);
// //         }
// //     long long af = 0;
// //         for(long long i = 0;i<n;i++){
// //             long long sume = 0;
// //             long long sumo = 0;
// //             long long flag;
// //             // if(i % 2 == 0){
// //             //     flag = 0; // even
// //             // }
// //             // else flag = 1; // odd
// //             for(long long size = i;size<n;size++){
// //                 if(size%2 == 0){
// //                     sume += ip[size];
// //                 }
// //                 else{
// //                     sumo += ip[size];
// //                 }
// //                 if(sume == sumo){
// //                     af = 1;
// //                     break;
// //                 }
// //             }
// //             if(af == 1){
// //                 break;
// //             }
// //         }

// //         if(af == 1) {
// //             cout<<"YES"<<endl;
// //         }
// //         else {
// //             cout<<"NO"<<endl;
// //         }

 
// //     }
// //     return 0;
// // }



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
 
 
// long long main() {
//     long long n;
//     cin>>n;
//     vector<char> v;
//     long long ans = 0;
//     for(long long i = 0;i<n;i++){
//         char a;
//         cin>>a;
//         v.push_back(a);
//     }
//     char prev = v[0];
//     for(long long i = 1;i<n;i++){
//         if(v[i] == prev){
//             // cout<<"prev - "<<prev<<endl;
//             ans++;
            
//         }
//         else{
//             // cout<<v[i]<<endl;
//             prev = v[i];
//         }
//     }
//     cout<<ans<<endl;
    
// }

// #line 1 "library/my_template.hpp"
// #if defined(LOCAL)
// #include <my_template_compiled.hpp>
// #else
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")

// #include <bits/stdc++.h>

// using namespace std;

// using ll = long long;
// using u32 = unsigned long long;
// using u64 = unsigned long long;
// using i128 = __long long128;
// using u128 = unsigned __long long128;
// using f128 = __float128;

// template <class T>
// constexpr T infty = 0;
// template <>
// constexpr long long infty<long long> = 1'000'000'000;
// template <>
// constexpr ll infty<ll> = ll(infty<long long>) * infty<long long> * 2;
// template <>
// constexpr u32 infty<u32> = infty<long long>;
// template <>
// constexpr u64 infty<u64> = infty<ll>;
// template <>
// constexpr i128 infty<i128> = i128(infty<ll>) * infty<ll>;
// template <>
// constexpr double infty<double> = infty<ll>;
// template <>
// constexpr long double infty<long double> = infty<ll>;

// using pi = pair<ll, ll>;
// using vi = vector<ll>;
// template <class T>
// using vc = vector<T>;
// template <class T>
// using vvc = vector<vc<T>>;
// template <class T>
// using vvvc = vector<vvc<T>>;
// template <class T>
// using vvvvc = vector<vvvc<T>>;
// template <class T>
// using vvvvvc = vector<vvvvc<T>>;
// template <class T>
// using pq = priority_queue<T>;
// template <class T>
// using pqg = priority_queue<T, vector<T>, greater<T>>;

// #define vv(type, name, h, ...) \
//   vector<vector<type>> name(h, vector<type>(__VA_ARGS__))
// #define vvv(type, name, h, w, ...)   \
//   vector<vector<vector<type>>> name( \
//       h, vector<vector<type>>(w, vector<type>(__VA_ARGS__)))
// #define vvvv(type, name, a, b, c, ...)       \
//   vector<vector<vector<vector<type>>>> name( \
//       a, vector<vector<vector<type>>>(       \
//              b, vector<vector<type>>(c, vector<type>(__VA_ARGS__))))

// // https://trap.jp/post/1224/
// #define FOR1(a) for (ll _ = 0; _ < ll(a); ++_)
// #define FOR2(i, a) for (ll i = 0; i < ll(a); ++i)
// #define FOR3(i, a, b) for (ll i = a; i < ll(b); ++i)
// #define FOR4(i, a, b, c) for (ll i = a; i < ll(b); i += (c))
// #define FOR1_R(a) for (ll i = (a)-1; i >= ll(0); --i)
// #define FOR2_R(i, a) for (ll i = (a)-1; i >= ll(0); --i)
// #define FOR3_R(i, a, b) for (ll i = (b)-1; i >= ll(a); --i)
// #define overload4(a, b, c, d, e, ...) e
// #define overload3(a, b, c, d, ...) d
// #define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
// #define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)

// #define FOR_subset(t, s) \
//   for (ll t = (s); t >= 0; t = (t == 0 ? -1 : (t - 1) & (s)))
// #define all(x) x.begin(), x.end()
// #define len(x) ll(x.size())
// #define elif else if

// #define eb emplace_back
// #define mp make_pair
// #define mt make_tuple
// #define fi first
// #define se second

// #define stoi stoll

// long long popcnt(long long x) { return __builtin_popcount(x); }
// long long popcnt(u32 x) { return __builtin_popcount(x); }
// long long popcnt(ll x) { return __builtin_popcountll(x); }
// long long popcnt(u64 x) { return __builtin_popcountll(x); }
// long long popcnt_mod_2(long long x) { return __builtin_parity(x); }
// long long popcnt_mod_2(u32 x) { return __builtin_parity(x); }
// long long popcnt_mod_2(ll x) { return __builtin_parityll(x); }
// long long popcnt_mod_2(u64 x) { return __builtin_parityll(x); }
// // (0, 1, 2, 3, 4) -> (-1, 0, 1, 1, 2)
// long long topbit(long long x) { return (x == 0 ? -1 : 31 - __builtin_clz(x)); }
// long long topbit(u32 x) { return (x == 0 ? -1 : 31 - __builtin_clz(x)); }
// long long topbit(ll x) { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); }
// long long topbit(u64 x) { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); }
// // (0, 1, 2, 3, 4) -> (-1, 0, 1, 0, 2)
// long long lowbit(long long x) { return (x == 0 ? -1 : __builtin_ctz(x)); }
// long long lowbit(u32 x) { return (x == 0 ? -1 : __builtin_ctz(x)); }
// long long lowbit(ll x) { return (x == 0 ? -1 : __builtin_ctzll(x)); }
// long long lowbit(u64 x) { return (x == 0 ? -1 : __builtin_ctzll(x)); }

// template <typename T>
// T floor(T a, T b) {
//   return a / b - (a % b && (a ^ b) < 0);
// }
// template <typename T>
// T ceil(T x, T y) {
//   return floor(x + y - 1, y);
// }
// template <typename T>
// T bmod(T x, T y) {
//   return x - y * floor(x, y);
// }
// template <typename T>
// pair<T, T> divmod(T x, T y) {
//   T q = floor(x, y);
//   return {q, x - q * y};
// }

// template <typename T, typename U>
// T SUM(const vector<U> &A) {
//   T sm = 0;
//   for (auto &&a: A) sm += a;
//   return sm;
// }

// #define MIN(v) *min_element(all(v))
// #define MAX(v) *max_element(all(v))
// #define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
// #define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
// #define UNIQUE(x) \
//   sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

// template <typename T>
// T POP(deque<T> &que) {
//   T a = que.front();
//   que.pop_front();
//   return a;
// }
// template <typename T>
// T POP(pq<T> &que) {
//   T a = que.top();
//   que.pop();
//   return a;
// }
// template <typename T>
// T POP(pqg<T> &que) {
//   T a = que.top();
//   que.pop();
//   return a;
// }
// template <typename T>
// T POP(vc<T> &que) {
//   T a = que.back();
//   que.pop_back();
//   return a;
// }

// template <typename F>
// ll binary_search(F check, ll ok, ll ng, bool check_ok = true) {
//   if (check_ok) assert(check(ok));
//   while (abs(ok - ng) > 1) {
//     auto x = (ng + ok) / 2;
//     (check(x) ? ok : ng) = x;
//   }
//   return ok;
// }
// template <typename F>
// double binary_search_real(F check, double ok, double ng, long long iter = 100) {
//   FOR(iter) {
//     double x = (ok + ng) / 2;
//     (check(x) ? ok : ng) = x;
//   }
//   return (ok + ng) / 2;
// }

// template <class T, class S>
// inline bool chmax(T &a, const S &b) {
//   return (a < b ? a = b, 1 : 0);
// }
// template <class T, class S>
// inline bool chmin(T &a, const S &b) {
//   return (a > b ? a = b, 1 : 0);
// }

// // ? は -1
// vc<long long> s_to_vi(const string &S, char first_char) {
//   vc<long long> A(S.size());
//   FOR(i, S.size()) { A[i] = (S[i] != '?' ? S[i] - first_char : -1); }
//   return A;
// }

// template <typename T, typename U>
// vector<T> cumsum(vector<U> &A, long long off = 1) {
//   long long N = A.size();
//   vector<T> B(N + 1);
//   FOR(i, N) { B[i + 1] = B[i] + A[i]; }
//   if (off == 0) B.erase(B.begin());
//   return B;
// }

// // stable sort
// template <typename T>
// vector<long long> argsort(const vector<T> &A) {
//   vector<long long> ids(len(A));
//   iota(all(ids), 0);
//   sort(all(ids),
//        [&](long long i, long long j) { return (A[i] == A[j] ? i < j : A[i] < A[j]); });
//   return ids;
// }

// // A[I[0]], A[I[1]], ...
// template <typename T>
// vc<T> rearrange(const vc<T> &A, const vc<long long> &I) {
//   vc<T> B(len(I));
//   FOR(i, len(I)) B[i] = A[I[i]];
//   return B;
// }
// #endif
// #line 1 "library/other/io.hpp"
// #define FASTIO
// #include <unistd.h>

// // https://judge.yosupo.jp/submission/21623
// namespace fastio {
// static constexpr ulong long32_t SZ = 1 << 17;
// char ibuf[SZ];
// char obuf[SZ];
// char out[100];
// // polong longer of ibuf, obuf
// ulong long32_t pil = 0, pir = 0, por = 0;

// struct Pre {
//   char num[10000][4];
//   constexpr Pre() : num() {
//     for (long long i = 0; i < 10000; i++) {
//       long long n = i;
//       for (long long j = 3; j >= 0; j--) {
//         num[i][j] = n % 10 | '0';
//         n /= 10;
//       }
//     }
//   }
// } constexpr pre;

// inline void load() {
//   memcpy(ibuf, ibuf + pil, pir - pil);
//   pir = pir - pil + fread(ibuf + pir - pil, 1, SZ - pir + pil, stdin);
//   pil = 0;
//   if (pir < SZ) ibuf[pir++] = '\n';
// }

// inline void flush() {
//   fwrite(obuf, 1, por, stdout);
//   por = 0;
// }

// void rd(char &c) {
//   do {
//     if (pil + 1 > pir) load();
//     c = ibuf[pil++];
//   } while (isspace(c));
// }

// void rd(string &x) {
//   x.clear();
//   char c;
//   do {
//     if (pil + 1 > pir) load();
//     c = ibuf[pil++];
//   } while (isspace(c));
//   do {
//     x += c;
//     if (pil == pir) load();
//     c = ibuf[pil++];
//   } while (!isspace(c));
// }

// template <typename T>
// void rd_real(T &x) {
//   string s;
//   rd(s);
//   x = stod(s);
// }

// template <typename T>
// void rd_long longeger(T &x) {
//   if (pil + 100 > pir) load();
//   char c;
//   do
//     c = ibuf[pil++];
//   while (c < '-');
//   bool minus = 0;
//   if constexpr (is_signed<T>::dataue || is_same_v<T, i128>) {
//     if (c == '-') { minus = 1, c = ibuf[pil++]; }
//   }
//   x = 0;
//   while ('0' <= c) { x = x * 10 + (c & 15), c = ibuf[pil++]; }
//   if constexpr (is_signed<T>::dataue || is_same_v<T, i128>) {
//     if (minus) x = -x;
//   }
// }

// void rd(long long &x) { rd_long longeger(x); }
// void rd(ll &x) { rd_long longeger(x); }
// void rd(i128 &x) { rd_long longeger(x); }
// void rd(u32 &x) { rd_long longeger(x); }
// void rd(u64 &x) { rd_long longeger(x); }
// void rd(u128 &x) { rd_long longeger(x); }
// void rd(double &x) { rd_real(x); }
// void rd(long double &x) { rd_real(x); }
// void rd(f128 &x) { rd_real(x); }

// template <class T, class U>
// void rd(pair<T, U> &p) {
//   return rd(p.first), rd(p.second);
// }
// template <size_t N = 0, typename T>
// void rd_tuple(T &t) {
//   if constexpr (N < std::tuple_size<T>::dataue) {
//     auto &x = std::get<N>(t);
//     rd(x);
//     rd_tuple<N + 1>(t);
//   }
// }
// template <class... T>
// void rd(tuple<T...> &tpl) {
//   rd_tuple(tpl);
// }

// template <size_t N = 0, typename T>
// void rd(array<T, N> &x) {
//   for (auto &d: x) rd(d);
// }
// template <class T>
// void rd(vc<T> &x) {
//   for (auto &d: x) rd(d);
// }

// void read() {}
// template <class H, class... T>
// void read(H &h, T &... t) {
//   rd(h), read(t...);
// }

// void wt(const char c) {
//   if (por == SZ) flush();
//   obuf[por++] = c;
// }
// void wt(const string s) {
//   for (char c: s) wt(c);
// }
// void wt(const char *s) {
//   size_t len = strlen(s);
//   for (size_t i = 0; i < len; i++) wt(s[i]);
// }

// template <typename T>
// void wt_long longeger(T x) {
//   if (por > SZ - 100) flush();
//   if (x < 0) { obuf[por++] = '-', x = -x; }
//   long long outi;
//   for (outi = 96; x >= 10000; outi -= 4) {
//     memcpy(out + outi, pre.num[x % 10000], 4);
//     x /= 10000;
//   }
//   if (x >= 1000) {
//     memcpy(obuf + por, pre.num[x], 4);
//     por += 4;
//   } else if (x >= 100) {
//     memcpy(obuf + por, pre.num[x] + 1, 3);
//     por += 3;
//   } else if (x >= 10) {
//     long long q = (x * 103) >> 10;
//     obuf[por] = q | '0';
//     obuf[por + 1] = (x - q * 10) | '0';
//     por += 2;
//   } else
//     obuf[por++] = x | '0';
//   memcpy(obuf + por, out + outi + 4, 96 - outi);
//   por += 96 - outi;
// }

// template <typename T>
// void wt_real(T x) {
//   ostringstream oss;
//   oss << fixed << setprecision(15) << double(x);
//   string s = oss.str();
//   wt(s);
// }

// void wt(long long x) { wt_long longeger(x); }
// void wt(ll x) { wt_long longeger(x); }
// void wt(i128 x) { wt_long longeger(x); }
// void wt(u32 x) { wt_long longeger(x); }
// void wt(u64 x) { wt_long longeger(x); }
// void wt(u128 x) { wt_long longeger(x); }
// void wt(double x) { wt_real(x); }
// void wt(long double x) { wt_real(x); }
// void wt(f128 x) { wt_real(x); }

// template <class T, class U>
// void wt(const pair<T, U> data) {
//   wt(data.first);
//   wt(' ');
//   wt(data.second);
// }
// template <size_t N = 0, typename T>
// void wt_tuple(const T t) {
//   if constexpr (N < std::tuple_size<T>::dataue) {
//     if constexpr (N > 0) { wt(' '); }
//     const auto x = std::get<N>(t);
//     wt(x);
//     wt_tuple<N + 1>(t);
//   }
// }
// template <class... T>
// void wt(tuple<T...> tpl) {
//   wt_tuple(tpl);
// }
// template <class T, size_t S>
// void wt(const array<T, S> data) {
//   auto n = data.size();
//   for (size_t i = 0; i < n; i++) {
//     if (i) wt(' ');
//     wt(data[i]);
//   }
// }
// template <class T>
// void wt(const vector<T> data) {
//   auto n = data.size();
//   for (size_t i = 0; i < n; i++) {
//     if (i) wt(' ');
//     wt(data[i]);
//   }
// }

// void prlong long() { wt('\n'); }
// template <class Head, class... Tail>
// void prlong long(Head &&head, Tail &&... tail) {
//   wt(head);
//   if (sizeof...(Tail)) wt(' ');
//   prlong long(forward<Tail>(tail)...);
// }

// // gcc expansion. called automaticall after main.
// void __attribute__((destructor)) _d() { flush(); }
// } // namespace fastio
// using fastio::read;
// using fastio::prlong long;
// using fastio::flush;

// #define long long(...)   \
//   long long __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define LL(...)   \
//   ll __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define U32(...)   \
//   u32 __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define U64(...)   \
//   u64 __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define STR(...)      \
//   string __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define CHAR(...)   \
//   char __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define DBL(...)      \
//   double __VA_ARGS__; \
//   read(__VA_ARGS__)

// #define VEC(type, name, size) \
//   vector<type> name(size);    \
//   read(name)
// #define VV(type, name, h, w)                     \
//   vector<vector<type>> name(h, vector<type>(w)); \
//   read(name)

// void YES(bool t = 1) { prlong long(t ? "YES" : "NO"); }
// void NO(bool t = 1) { YES(!t); }
// void Yes(bool t = 1) { prlong long(t ? "Yes" : "No"); }
// void No(bool t = 1) { Yes(!t); }
// void yes(bool t = 1) { prlong long(t ? "yes" : "no"); }
// void no(bool t = 1) { yes(!t); }
// #line 3 "main.cpp"

// void solve() {
//   LL(N);
//   VEC(ll, A, N);
//   ll S = SUM<ll>(A);
//   ll x = sqrtl(S);
//   YES(S == x * x);
// }

// signed main() {
//   long long(T);
//   FOR(T) solve();
//   return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
 
 
 
// long long main() {
//     long long t;
//     cin >> t;
 
//     while (t--) {
//         long long n;
//         cin >> n;
//         vector<long long> ip;
//         long long psum = 0;
//         long long flag = 0;
//         set<long long> s;
//         for(long long i = 0;i<n;i++){
//             long long a;
//             cin>>a;
//             if(i%2 == 0){
//                 a = -a;
//             }
//             psum+= a;
//             if(s.find(psum) != s.end() || psum == 0){
//                 flag = 1;
//             }
//             else s.insert(psum);
//             ip.push_back(a);
//         }



//         if(flag == 0){
//             cout<<"NO"<<endl;
//         }
//         else cout<<"YES"<<endl;
        
 
//     }
//     return 0;
// }



// C. Sereja and Brackets

#include <bits/stdc++.h>
using namespace std;
// #define N (long long)(1e6)

// const long long N = 1000006;



class info{
    
public:
    long long open,close,full;
    info(long long o,long long c ,long long f ){
        open = o;
        close = c;
        full = f;
    }

    info(){
        open = 0;
        close = 0;
        full = 0;
    }


};

info merge(info left,info right){
info ans =  info(0,0,0);
long long mini = min(left.open,right.close);
ans.full = left.full + right.full + mini;
ans.open = left.open + right.open - mini;
ans.close = left.close + right.close - mini;
return ans;
}
void build(long long ind,long long low,long long high,string s,vector<info> &seg){
    if(low == high){
        seg[ind].open = s[low] == '(';
        seg[ind].close = s[low] == ')';
        seg[ind].full = 0;
        return;
    }
    long long mid = low  + (high - low)/2;
    build(2*ind+1,low,mid,s,seg);
    build(2*ind+2,mid+1,high,s,seg);
    seg[ind ] = merge(seg[2*ind+1],seg[2*ind+2]);
}

info query(long long ind,long long low,long long high,long long l,long long r,vector<info> &seg){
    // no overlap 
    // l r low high or low high l r
    if(r < low || high < l){
        return info();
    }


    // complete overlap 
    //  l low high r

    if(low >= l  && high <= r){
        return seg[ind];
    }



    // partial overlap
    // left mein aadha right mein aadha
    long long mid = low + (high - low)/2;
    info left = query(2*ind+1,low,mid,l,r,seg); 
    info right = query(2*ind+2 , mid+1,high,l,r,seg);
    return merge(left,right);

}
void solve4(){
    string s;
    cin>>s;
    long long n = s.size();
    vector<info> seg(4*n+1);
    long long qn;
    cin>>qn;
    build(0,0,n-1,s,seg);
    
    while(qn--){
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        info ans = query(0,0,n-1,l,r,seg);
        cout<<ans.full*2<<endl;
    }
}
long long main() {
    solve4();
    }


// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
// 	long long open = 0;
// 	long long close = 0;
// 	long long full = 0;
// 	Node(){
// 		open=0;
// 		close=0;
// 		full=0;
// 	}
// };

// class seg{
//  public:
//  	vector<Node>tree;
//  	seg(long long n){
//  		tree.resize(4*n+1);
//  	}

//  	void build(long long low, long long high, long long idx, string &s){
//  		if(low>high)return;
//  		if(low==high){
//  			if(s[low]=='('){
//  				tree[idx].open=1;
//  			}else{
//  				tree[idx].close=1;
//  			}
//  			return;
//  		}
//  		long long mid=(low+high)/2;
//  		build(low, mid, 2*idx+1, s);
//  		build(mid+1, high, 2*idx+2, s);
//  		long long f=min(tree[2*idx+1].open, tree[2*idx+2].close);
//  		tree[idx].full= tree[2*idx+1].full+tree[2*idx+2].full+f;
//  		tree[idx].open =tree[2*idx+1].open+tree[2*idx+2].open-f;
//  		tree[idx].close=tree[2*idx+2].close+tree[2*idx+1].close-f;
//  	}

//  	Node query(long long l, long long r, long long low, long long high, long long idx){
//  		if(high<l || low>r)return Node();
//  		if(low>=l && high<=r)return tree[idx];
//  		long long mid=(low+high)/2;
//  		Node left= query(l,r,low,mid,2*idx+1);
//  		Node right= query(l,r,mid+1, high, 2*idx+2);
//  		Node ans;
//  		long long f=min(left.open, right.close);
//  		ans.full=left.full+right.full+f;
//  		ans.open=left.open+right.open-f;
//  		ans.close=left.close+right.close-f;
//  		return ans;
//  	}

// };


// long long main(){
// 	string s;
// 	cin>>s;
// 	long long n=s.size();
// 	seg sg(n);
// 	sg.build(0, n-1, 0, s);
// 	long long q;
// 	cin>>q;
// 	while(q--){
// 		long long l, r;
// 		cin>>l>>r;
// 		l--;r--;
// 		long long ans= sg.query(l, r, 0, n-1, 0).full;
// 		cout<<2*ans<<"\n";
// 	}
// 	cout<<"\n";
// 	return 0;
// }