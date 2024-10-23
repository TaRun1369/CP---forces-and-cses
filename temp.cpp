// #include <bits/stdc++.h>

// using namespace std;

// string convert2binary(long long n){
//     if ( n == 0) return "0";
//     string res = "";
//     while(n != 1){
//         if(n % 2 == 1) res += '1';
//         else res += '0';
//         n/=2;
//     }
//     res += '1';
//     reverse(res.begin(), res.end());
//     return res;
// }

// long long convert2decimal(string n){
//     long long ans = 0 , p2 = 1;
//     long long len = n.size();
//     for(long long i = len - 1;i>= 0;i--){
//         if(n[i] == '1') ans += p2;
//         p2 *= 2;
//     }
//     return ans;
// }

// void swap(long long &a,long long &b){
//     a = a^b;    
//     b = a^b;    // yaha a = a^b i.e     b = (a^b)^b i.e. b = a
//     a = a^b;    // yaha a = a^b and b = a   therefore a = b
//     // swapped
// }

// void removelastsetbit(long long &n){
//     //  remove rightmost set bit
//     n -= (n & -n);
//     cout<<"n - "<<n<<endl;

// }

// void something(long long &n){
//     n += (n & -n);
// }


// bool checkIthIsBitSet(long long n,long long i){
//     // using left shift operator
//     return (n & (1<<i)) != 0; // 1 ko i  times left mein bheja baki sab bit 0 honge aur fir AND kiya toh ith wala if 1 then 1 else 0
// }


// bool checkIthIsBitSet2(long long n,long long i){
//     // using right shift operator
//     n = n >> i;
//     return (n & 1) != 0; 
// }

// void setIthBit(long long &n,long long i){
//     n = n|(1 << i);
// }

// void clearIthBit(long long &n,long long i){
//     n = n& (~(1<<i));
// }

// void toggle(long long &n,long long i){
//     n = n^(1<<i);
// }

// void removeTheLastSetBit(long long &n){
//     // rightmost bit ko hatao 
//     n = n & (n-1);
// }

// bool checkIfPowerOf2(long long n){
//     return (n&(n-1)) == 0;
// }

// long long countNoOfSetBits(long long n){
//     long long cnt = 0;
//     while(n != 0){
//         cnt += n&1;
//         n = n >> 1;
//     }
//     return cnt;
// }

// long long countNoOfSetBits2(long long n){
//     long long cnt = 0;
//     while(n != 0){
//         cnt++;
//         n = n&(n-1);
//     }
//     return cnt;
// }


// vector<vector<long long>> powerSet(long long n){
//     vector<vector<long long>> ans;

//     for(long long i = 0;i<(1<<n);i++){
//         vector<long long> temp;
//         for(long long j = 0;j<n;j++){
//             if(i & (1<<j)) temp.push_back(j + 1);
//         }
//         ans.push_back(temp);
//     }

//     return ans;
// }

// long long xorFrom1toN(long long num){
//      // TC - O(1) 
//      // 1 and N included
//     if(num % 4 == 1) return 1;
//     else if(num % 4 == 2) return num + 1;
//     else if(num % 4 == 3) return 0;
//     else return num;
// }

// long long xorFromLtoR(long long l,long long r){
//     // l and r included 
//     // TC - O(1) 
//     return xorFrom1toN(r) ^ xorFrom1toN(l-1);
// }
// long long main(){
//     long long a = 17;
//     something(a);
//     cout<<a<<endl;

//     // cout<<xorFrom1toN(4)<<endl;
//     // cout<<xorFromLtoR(2,3)<<endl;
//     // long long a = 8;
//     // string bin = convert2binary(a);
//     // cout << bin << endl;
//     // long long l = convert2decimal(bin);
//     // cout<<l<<endl;
    
//     // long long a = 5,b = 8;
//     // swap(a,b);
//     // cout<<a<<"       "<<b<<endl;

//     // cout<<checkIthIsBitSet2(13,1);
//     // cout<<checkIthIsBitSet(13,1);
//     // cout<<checkIthIsBitSet2(13,2);
//     // cout<<checkIthIsBitSet(13,2);
//     // cout<<endl;
//     // long long a = 8;
//     // // setIthBit(a,1);
//     // // // 101
//     // // cout<<a<<endl;
//     // // // 111

//     // // clearIthBit(a,1);
//     // // cout<<a<<endl;
//     // // // 101

//     // // toggle(a,2);
//     // // cout<<a<<endl;

//     // // removeTheLastSetBit(a);
//     // cout<<a<<endl;
//     // // if(checkIfPowerOf2(a) == true){
//     // //     cout<<"Yes"<<endl;
//     // // }

//     // cout<<countNoOfSetBits2(a)<<endl;
//     // cout<<countNoOfSetBits(a)<<endl;
//     // vector<vector<long long>> ps = powerSet(3);
//     // for(auto x:ps){
//     //     for(auto y:x){
//     //         cout<<y<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     // return 0;
//     // long long tc;
//     // cin>>tc;
//     // for(long long i = 0;i<tc;i++){
//     //     long long x,y;
//     //     cin>>x>>y;
//     //     // cout<<convert2binary(x)<<endl;
//     //     long long xx = x^y,c = xx;

//     //     removeTheLastSetBit(xx);
//     //     cout<<(c - xx)<<endl;
//     // }

// }







// // /*
// //     author: kartik8800
// // */
 
// // #include<bits/stdc++.h>
// // #define ll long long
// // #define pb push_back
// // #define fr(a,b) for(long long i = a; i < b; i++)
// // #define rep(i,a,b) for(long long i = a; i < b; i++)
// // #define mod 1000000007
// // #define inf (1LL<<60)
// // #define all(x) (x).begin(), (x).end()
// // #define prDouble(x) cout << fixed << setprecision(10) << x
// // #define triplet pair<ll,pair<ll,ll>>
// // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// // using namespace std;
 
// // vector<long long> tree[200001];
// // long long depth[200001];
// // long long ans[200001];
 
// // void eval_depth(long long src, long long par)
// // {
// //     long long src_depth = 0;
// //     for(long long child : tree[src])
// //     {
// //         if(child != par)
// //         {
// //             eval_depth(child, src);
// //             src_depth = max(src_depth, 1 + depth[child]);
// //         }
// //     }
// //     depth[src] = src_depth;
// // }
 
// // void solve(long long src, long long par, long long par_ans)
// // {
// //     vector<long long> prefixMax, suffixMax;
// //     // get depth of child nodes.
// //     for(long long child : tree[src])
// //     {
// //         if(child != par)
// //         {
// //             prefixMax.push_back(depth[child]);
// //             suffixMax.push_back(depth[child]);
// //         }
// //     }
// //     // build prefix and suffix
// //     for(long long i = 1; i < prefixMax.size(); i++)
// //         prefixMax[i] = max(prefixMax[i], prefixMax[i-1]);
// //     for(long long i = (long long)suffixMax.size() - 2; i >= 0; i--)
// //         suffixMax[i] = max(suffixMax[i], suffixMax[i+1]);
 
// //     //eval ans for every child c_no
// //     long long c_no = 0;
// //     for(long long child : tree[src])
// //     {
// //         if(child != par)
// //         {
// //             long long op1 = (c_no == 0) ? long long_MIN : prefixMax[c_no - 1];
// //             long long op2 = (c_no == (long long)suffixMax.size() - 1) ? long long_MIN : suffixMax[c_no + 1];
// //             long long partial_ans = 1 + max(par_ans, max(op1,op2));
 
// //             solve(child, src, partial_ans);
// //             c_no++;
// //         }
// //     }
 
// //     //eval ans for src
// //     ans[src] = 1 + max(par_ans, (prefixMax.empty() ? -1 : prefixMax.back()));
// // }
 
// // long long main() {
// //    fast_io;
// //    ll t,n,m,x,i,j,k,q;
// //    //cin >> t;
// //    t = 1;
// //    while(t--)
// //    {
// //         cin >> n;
// //         fr(0,n-1)
// //         {
// //             long long u,v;
// //             cin >> u >> v;
// //             tree[u].push_back(v);
// //             tree[v].push_back(u);
// //         }
// //         eval_depth(1, 0);
// //         solve(1, 0, -1);
// //         fr(1,n+1)
// //             cout << ans[i] <<' ';
// //    }
// //    return 0;
// // }





#include <bits/stdc++.h>
using namespace std;

long long n;
long long dp[100005][3][2];

long long recur(long long ind, long long prev, long long haspair) {
    if (ind == n) {
        return haspair == 1; // only return 1 if exactly one pair of adjacent 0s is present
    }

    long long ans = 0;
    if(dp[ind][prev+1][haspair] != -1) return dp[ind][prev+1][haspair];
    if (prev == 0) {
        if (haspair == 1) {
            // if the previous bit was 0 and we already have one pair of adjacent 0s, we can only add a 1
            ans += recur(ind + 1, 1, haspair);
        } else {
            // if the previous bit was 0 and we don't yet have a pair of adjacent 0s, we can add either 0 or 1
            ans += recur(ind + 1, 0, haspair + 1); // add 0 and increase pair count
            ans += recur(ind + 1, 1, haspair); // add 1 without increasing pair count
        }
    } else {
        // if the previous bit was 1, we can add either 0 or 1
        ans += recur(ind + 1, 0, haspair);
        ans += recur(ind + 1, 1, haspair);
    }

    return dp[ind][prev + 1][haspair] = ans;
}

long long main() {
    cout << "Enter the value of n: ";
    cin >> n;
        memset(dp, -1, sizeof(dp)); // Initialize dp array to -1

    long long result = recur(0, -1, 0); // start with index 0, previous bit -1 (none), and 0 pairs of adjacent 0s
    cout << result << endl;
    return 0;
}



class Solution {
public:
    long long rangeSum(vector<long long>& nums, long long n, long long left, long long right) {
        long long pref = nums[0];
        vector<long long> prefix(n,0);
        prefix[0] = nums[0];
        for(long long i = 1;i<n;i++){
            pref += nums[i];
            prefix[i] = pref;
        }

        for(long long i = 1;i<n;i++){
            long long it = nums[i];
            prefix.push_back(it);
        }
        for(long long i = 2;i<n;i++){
            long long j = 0;
            while(j <= i - 2){
                prefix.push_back(prefix[i] - prefix[j]);
                j++;
            }
        }

        sort(prefix.begin(),prefix.end());
        // for(auto it : prefix) cout<<it<<' ';
        vector<long long> presum;
        long long preS=prefix[0];
        presum.push_back(preS);
        for(long long i = 1;i<prefix.size();i++){
            preS += prefix[i];
            presum.push_back(preS);
        }
        if(left == 1) return presum[right - 1];
        else 
        return presum[right-1] - presum[left-2];
    }
};