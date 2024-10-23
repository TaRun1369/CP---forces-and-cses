#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9 + 7;


long long main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,k,d;
    cin>>n>>k>>d;
    vector<vector<vector<long long>>> adj(n+1);
    vector<long long> vis(n+1,0);
    vector<long long> col(n + 1,-1); // 1 - coloured as imp
    queue<long long> q;

    for(long long i = 1;i<=k;i++){
        long long ps;
        cin>>ps;
        q.push(ps);
        vis[ps] = 1;
    } 

    for(long long i=1;i<=n-1;i++ ){
        long long u,v;
        cin>>u>>v;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});


    }

    while(!q.empty()){
        long long node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(!vis[it[0]]){
                vis[it[0]] = 1;
                col[it[1]] = 1; // imp
                q.push(it[0]);
            }
        }
    }
    vector<long long> ans;
    for(long long i = 1;i<=n-1;i++){
        if(col[i] == -1) ans.push_back(i);

    }
    cout<<ans.size()<<endl;
    for(auto it : ans) cout<<it<<" ";

    return 0;
}
