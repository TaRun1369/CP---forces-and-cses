
#include<bits/stdc++.h>
using namespace std;
vector<long long> tree[200005];


void dfs(long long curr,long long par,vector<long long> &ans){
    long long subord = 0;
    for(long long child : tree[curr]){
        if(child != par){
            dfs(child,curr,ans);
            subord += 1 + ans[child];
        }
    }
    ans[curr] = subord;

}
long long main() {
    long long n;
    cin>>n;
    
    for(long long i=2;i<=n;i++){
        long long x;
        cin>>x;
        tree[x].push_back(i);
        tree[i].push_back(x);
    }

    vector<long long> ans(n+1);
    dfs(1,-1,ans);
    for(long long i  = 1;i<n+1;i++) cout<<ans[i]<<" ";

}
