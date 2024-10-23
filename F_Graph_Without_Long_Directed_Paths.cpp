
#include<bits/stdc++.h>
using namespace std;
long long n = 2e5 +5;
vector<long long> col(n,-1);
vector<bool> vis(n);
vector<vector<long long>> adj(n);
bool dfs(long long node ){

    vis[node] = 1;
    for(auto it : adj[node]){
        if(col[it] == col[node]) return false;
        else if(!vis[it])
        {   
            col[it] = !col[node];
            if(!dfs(it)) return false;
            
        }
    }

    return true; 
}
long long main(){
    long long n,m;
    cin>>n>>m;
    
    
    vector<vector<long long>> edge;
    
    for(long long i = 0;i<m;i++){
        long long u,v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
        edge.push_back({u-1,v-1});
    }

    
    col[0] = 0;
   if(dfs(0) == false){
    cout<<"NO"<<endl;
   }
   else {
    cout<<"YES"<<endl;
    for(auto it : edge){
        long long u = it[0];
        long long v = it[1];
        if(col[u] == 0){
            cout<<"1";
        }
        else cout<<"0";
    }
    cout<<endl;
   }
    
}
