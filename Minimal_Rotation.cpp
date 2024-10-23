
#include<bits/stdc++.h>
using namespace std;

template<typename... T>
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {cerr << *it << "=" << a << ", "; err(++it, args...);}

#define int long long
#define F first
#define S second

const long long inf = 1LL<<62;
const int md = 1000000007;

// void solve(){
//     string s;
//     cin>>s;
//     s+=s;
//     int n = s.size();
//     int i = 0;
//     int ans = 0;
//     while (i < n/2) {
//         ans = i;
//         int k = i, j = i + 1;
//         while (j < n && s[j] >= s[k]) {
//             if (s[j] == s[k]) k++;
//             if (s[j] > s[k] ) k = i;
//             j++;
//         }
//         while(i <= k) i += j - k;
//     }
//     cout<<s.substr(ans,n/2);
// }  

void solve(){
    string s;
    cin >> s;
    s += s;
    int n = s.size();
    int i = 0;
    int ans = 0;

    while (i < n / 2) {
        ans = i;
        int k = i, j = i + 1;

        while (j < n && s[j] >= s[k]) {
            if (s[j] == s[k]) {
                k++;
            } else if (s[j] > s[k]) {
                k = i;  // Reset `k` to `i` if `s[j]` is greater, as we're still checking this rotation
            } else {
                // `s[j] < s[k]`, which means the rotation starting at `i` is not optimal
                break;
            }
            j++;
        }

        // Instead of skipping aggressively, move `i` to the next candidate and continue checking
        if (s[j] < s[k]) {
            // If `s[j] < s[k]`, this rotation can't be minimal, so we skip it
            i = max(i + 1, k + 1); 
        } else {
            // If we've matched to the end, increment i by how many characters matched
            i += j - k;
        }
    }

    cout << s.substr(ans, n / 2);
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    //cin>>t;
    for (int i = 1; i <= t; i++) {
        solve();
        cout<<'\n';
    }
}