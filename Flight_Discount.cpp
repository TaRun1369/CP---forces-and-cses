#include <bits/stdc++.h>
using namespace std;
#define LONG_MAX 1e17
long long vis[1000005];
long long dist1[1000005],dist2[1000005];
void dij(long long start,long long dis[],vector<pair<long long,long long long long>> adj[]){
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, start});
    for(long long i = 0;i<1000005;i++) dis[i] = LONG_MAX;
    dis[start] = 0;
    memset(vis,0,sizeof vis);


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
            if(dist + weight < dis[nextNode]){
                dis[nextNode] = dist + weight;
                pq.push({dis[nextNode], nextNode});
            }
        }
    } 


}



long long main(){
    long long n, m;
    cin >> n >> m;

    vector<pair<long long, long long>> adj1[n + 1],adj2[n+1];
    vector<tuple<long long,long long,long long> > edges;
    for(long long i = 0; i < m; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        adj1[a].push_back({b, c}); 
        adj2[b].push_back({a,c});
        edges.push_back({a,b,c});
    }

    dij(1,dist1,adj1);
    dij(n,dist2,adj2);
    long long ans = LONG_MAX;

    for(auto [x,y,z] : edges){
        ans = min(ans,dist1[x] + dist2[y] + z/2);
    }

    cout<<ans<<endl;

    

}
