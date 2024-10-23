// #include<bits/stdc++.h>
// using namespace std;
// void dfs(long long node,vector<bool> &vis,vector<long long> g[]){
//     vis[node] = true;
//     for(auto it : g[node]){
//         if(!vis[it]){
//             dfs(it,vis,g);
//         }
//     }
// }
// signed main(){
//     long long n,m;
//     cin>>n>>m;

//     vector<long long> graph[n+1],revgraph[n+1];
//     vector<long long> topo,indegree(n+1,0);
//     for(long long i = 0;i<m;i++){
//         long long u,v;
//         cin>>u>>v;

//         graph[u].push_back(v);
//         indegree[v]++;
//         revgraph[v].push_back(u);
//     }

//     vector<bool> vis(n+1,false);

    

//     queue<long long>q;
//     for(long long i = 1;i<=n;i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     while(!q.empty()){
//         long long t = q.front();q.pop();
//         topo.push_back(t);

//         for(auto it : graph[t]){
//             indegree[it]--;
//             if(indegree[it] == 0){
//                 q.push(it);
//             }
//         }
        
//     }
//     vector<long long> ans;
//     for(auto it : topo){
//         if(!vis[it]){
//             ans.push_back(it);
//         dfs(it,vis,revgraph);
//         }
//     }

//     if(ans.size() <= 1){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//         for(long long i = 0;i<ans.size() - 1;i++){
//             cout<<ans[i]<<" "<<ans[i+1]<<endl;
//         }
//     }
    
// }

#include <bits/stdc++.h>
using namespace std;
vector<long long> ans;
void dfs1(long long node, vector<bool> &vis, vector<long long> graph[], vector<long long> &finishOrder) {
    vis[node] = true;
    for (auto it : graph[node]) {
        if (!vis[it]) {
            dfs1(it, vis, graph, finishOrder);
        }
    }
    finishOrder.push_back(node);
}

void dfs2(long long node, vector<bool> &vis, vector<long long> revgraph[], vector<long long> &component,long long color) {
    vis[node] = true;
    
    component.push_back(node);
    ans[node] = color;
    for (auto it : revgraph[node]) {
        if (!vis[it]) {
            dfs2(it, vis, revgraph, component,color);
        }
    }
}

long long main() {
    long long n, m;
    cin >> n >> m;
    ans.resize(n+1);
    vector<long long> graph[n + 1], revgraph[n + 1];
    for (long long i = 0; i < m; i++) {
        long long u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        revgraph[v].push_back(u);
    }

    vector<bool> vis(n + 1, false);
    vector<long long> finishOrder;

    // Perform DFS on the original graph to get the finish order
    for (long long i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs1(i, vis, graph, finishOrder);
        }
    }

    fill(vis.begin(), vis.end(), false);
    vector<long long> leaders;
    reverse(finishOrder.begin(),finishOrder.end());
    // Perform DFS on the reversed graph in reverse of finish order
    long long color = 1;
    for (auto it : finishOrder) {
        long long node = it;
        if (!vis[node]) {
            vector<long long> component;
            dfs2(node, vis, revgraph, component,color++);
            leaders.push_back(component[0]); // Take the first node in the component as the leader
            
        }
    }

    cout<<leaders.size()<<endl;
   for(long long i = 1;i<=n;i++){
    cout<<ans[i]<<" ";
   }


    return 0;
}
