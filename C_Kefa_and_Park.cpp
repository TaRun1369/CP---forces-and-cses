
#include<bits/stdc++.h>
using namespace std;

long long ans = 0;
long long m1;
void dfs(long long node,vector<vector<long long>> &adj,vector<long long> &v,long long numC,long long parent,long long maxC){

    if(v[node] == 1) numC++;
    else numC = 0;
    maxC = max(maxC,numC);
    // cout<<node<<endl;
    long long c = 0;
    for(auto it : adj[node]){
        if(it != parent)
        {   dfs(it,adj,v,numC,node,maxC);
            c++;
        }
    }

    if(c == 0 && maxC <= m1) ans++;
    
}
long long main(){
    long long n,m;
    cin>>n>>m;
    vector<long long> v(n);
    for(long long i = 0;i<n;i++){
        cin>>v[i];
    }

    vector<vector<long long>> adj(n);
    for(long long i = 0;i<n-1;i++){
        long long u,v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    
    // for(long long i = 0;i<n;i++){
    //     cout<<i<<"->";
    //     for(auto it : adj[i]){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }
    m1 = m;
    dfs(0,adj,v,0,-1,0);
    cout<<ans<<endl;
}
