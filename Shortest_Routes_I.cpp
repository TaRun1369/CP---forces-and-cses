
#include <bits/stdc++.h>
using namespace std;

long long main(){
    long long n, m;
    cin >> n >> m;

    vector<vector<pair<long long, long long>>> adj(n + 1);

    for(long long i = 0; i < m; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c}); 
    }

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    vector<long long> vis(n + 1, 0);
    vector<long long> ans(n + 1, LLONG_MAX);
    ans[1] = 0;
    pq.push({0, 1}); 

    while(!pq.empty()){
        auto top = pq.top();
        pq.pop();
        long long node = top.second;
        long long dist = top.first;

        if (vis[node]) continue; 
        vis[node] = 1;

        for(auto it : adj[node]){
            long long nextNode = it.first;
            long long weight = it.second;
            if(!vis[nextNode] && dist + weight < ans[nextNode]){
                ans[nextNode] = dist + weight;
                pq.push({ans[nextNode], nextNode});
            }
        }
    }

    for(long long i = 1; i <= n; i++){
         cout << ans[i] << " ";
    }
}
