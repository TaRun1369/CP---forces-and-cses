

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define long long long long

long long n, m;
long long sv, ev;
vector<vector<long long>> g;
vector<long long> vis;
vector<long long> parent;

bool dfs(long long start,long long par){
    vis[start] = 1;
    parent[start] = par;
    for(auto it : g[start]){
        if(!vis[it]){
            if(dfs(it,start)) return true;
        }
        else if(par != it){
            sv = start;
            ev = it;
            return true;
        }
    }
    return false;
}
bool visitALL(){
    for(long long i = 1;i<=n;i++){
        if(!vis[i] && dfs(i,0) == true) return true;
     }

     return false;
}
long long32_t main(){
    cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1);
    parent.resize(n + 1);
    for(long long i = 0;i<m;i++){
        long long a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    if(visitALL() == false){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    vector<long long> ans;
    long long temp = sv;
    ans.push_back(temp);
    while(temp != ev){
        ans.push_back(parent[temp]);
        temp = parent[temp];
    }
    ans.push_back(sv);
    cout<<ans.size()<<endl;
    for(auto it : ans){
        cout<<it<<" ";
    }
    
}