#include<bits/stdc++.h>
using namespace std;
#define int long long 

int kmp[10001];

int dp[1001][101];
bool done[1001][101];
const int mod = 1e9+7;
const int mxK = 26;

 
int solve(int i, int n, int j, string &s)
{
    if(done[i][j]) return dp[i][j];
    done[i][j] = true;
    if(i == n) return dp[i][j] = (j==(int)s.size()?1:0);
    if(j == (int)s.size())
    {
        return dp[i][j] = (mxK*solve(i+1,n,j,s))%mod;
    }
    int ans = 0;
    int t;
    for(int k = 0; k < mxK; k++)
    {
        t = j;
        while(true)
        {
            if(k == s[t]-'A')
            {
                t++;
                break;
            }
            else if(t)
            {
                t = kmp[t-1];
            }
            else break;
        }
        ans += solve(i+1,n,t,s);
        ans %= mod;
    }
    return dp[i][j] = ans;
}

signed main(){
int n;
cin>>n;
 string pattern;
 cin>>pattern;

 long long m = pattern.size();

//  vector<long long> lps(m,0); // longest prefix suffix same array 

 long long i = 1;
 long long len = 0;

 while(i < m){
    if(pattern[i] == pattern[len]){
        len++;
        kmp[i] = len;
        i++;
    }
    else{
        if(len != 0){
            len = kmp[len-1];

        }
        else{
            kmp[i] = 0;
            i++;
        }
    }
 }
    cout << solve(0, n, 0, pattern);
}