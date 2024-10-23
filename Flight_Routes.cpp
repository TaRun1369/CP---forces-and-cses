#include<bits/stdc++.h>
using namespace std;
#define INF 1e17
#define long long long long
long long n,m,k;

vector<vector<long long>> dist;
vector<vector<pair<long long,long long>>> g;


void dij(){
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;
    pq.push({0,1});

    while(!pq.empty()){
        long long cost = pq.top().first;
        long long node = pq.top().second;

        pq.pop();
        if(dist[node][k-1] < cost){
            continue;
        }

        for(auto it : g[node]){
            long long v = it.first;
            long long c = it.second;
            if(dist[v][k-1] > c+cost){
                dist[v][k-1] = c+cost;
                pq.push({dist[v][k-1],v});
            }
            sort(dist[v].begin(),dist[v].end());
        }
    }

}
long long32_t main(){
    cin>>n>>m>>k;
    g.resize(n+1);
    dist.resize(n+1);
    for(long long i = 1;i<=n;i++){
        dist[i].resize(k);
        for(long long j = 0;j<k;j++){
            dist[i][j] = INF;
        }
    }

    dist[1][0] = 0;
    for(long long i = 0;i<m;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }

    dij();

    for(long long i = 0;i<k;i++){
        cout<<dist[n][i]<<" ";
    }

}