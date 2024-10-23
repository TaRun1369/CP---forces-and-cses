#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;
bool iscycle = true;
void dfs(long long node,vector<long long>& vis,vector<vector<long long>>& adj){
    vis[node] = 1;
    if(adj[node].size() != 2) iscycle = false;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj);
        }
    }

    // return true;
}

long long main() {
    long long n,m;
    cin>>n>>m;

vector<vector<long long>> adj(n);
vector<long long> vis(n,0);
// vector<long long> deg(n,0);
for(long long i = 0;i<m;i++){
    long long u,v;
    cin>>u>>v;
    adj[u-1].push_back(v-1);
    adj[v-1].push_back(u-1);
}


long long ans = 0;
for(long long i = 0;i<n;i++){

    if(!vis[i]){
        iscycle = true;
        dfs(i,vis,adj);
        if(iscycle == true)ans++;
    }
}

cout<<ans<<endl;



    return 0;
}
