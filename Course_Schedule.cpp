#include <bits/stdc++.h>
using namespace std;
#define long long long long
long long n,m;


long long32_t main(){
cin>>n>>m;

vector<vector<long long>> adj(n+1);
vector<long long> vis(n+1,0);
vector<long long> indegree(n+1,0);
    for(long long i = 0;i<m;i++){
        long long a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        indegree[b]++;
    }
    queue<long long> q;
    for(long long i = 1;i<=n;i++){
        if(indegree[i] == 0){
            q.push(i);
            vis[i] = 0;
        }
    }
    vector<long long> ans;    
    while(!q.empty()){
        long long top = q.front();
        q.pop();
        vis[top] = 1;
        ans.push_back(top);
        // cout<<top<<" ";

        for(auto it : adj[top]){
            if(!vis[it]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
    }

    // for(auto oi
    if(ans.size() < n){
        cout<<"IMPOSSIBLE";
    }
    else{
        for(auto it : ans) cout<<it<<" ";
    }


}


