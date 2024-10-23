
#include<bits/stdc++.h>
using namespace std;
vector<long long> tree[200001];
long long dp[200001][2];
void solve(long long curr,long long par){
    vector<long long> prefix,suffix;
    dp[curr][0]=dp[curr][1]=0;
    bool leaf = true;
    for(long long child:tree[curr]){
        if(child != par){
            leaf = false;
            solve(child,curr);
        }
    }
    if(leaf == true) return;
    // PREFIX BANA PEHLE
    for(long long child:tree[curr]){
        if(child != par){
            prefix.push_back(max(dp[child][0],dp[child][1]));
            suffix.push_back(max(dp[child][1],dp[child][0]));
    
        }
    }

    for(long long i = 1;i<prefix.size();i++){
        prefix[i] = prefix[i] + prefix[i - 1];
    }
    for(long long i = suffix.size() - 2;i>=0;i--){
        suffix[i] = suffix[i] + suffix[i + 1];
    }
    // ye case agar kisi bache ke sath edge nhi banaya 
    dp[curr][0] = suffix[0];
    // ab konse bache ke sath edge banaya 
    long long childselected = 0;
    for(long long child : tree[curr]){
        if(child != par){
            long long left = childselected == 0 ? 0 : prefix[childselected - 1];
            long long right = childselected == suffix.size() - 1 ? 0 : suffix[childselected + 1];

            dp[curr][1] = max(dp[curr][1],left + right + dp[child][0] + 1);
            childselected++;
        }
    }


}

long long main() {
    long long n;
    cin>>n;

    for(long long i=2;i<=n;i++){
        long long u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    solve(1,0);
    cout<<max(dp[1][0],dp[1][1])<<endl;

}
