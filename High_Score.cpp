
#include <bits/stdc++.h>
using namespace std;
#define long long long long
const long long INF = 1e17;
const long long NINF = INF*(-1);
long long n,m;
struct edge{
    long long first;
    long long second;
    long long third;
};
vector<edge> edges;
vector<long long> dist;

void bellman_ford(){
    for(long long i  = 1;i<=n;i++){
        for(auto e : edges){
            long long u = e.first;
            long long v = e.second;
            long long w = e.third;
            if(dist[u] == INF) continue; // kyuki wo edge kya dursi edge ko relax karegi jabki wo khud barbaad hai 
            dist[v] = min(dist[v], w + dist[u]);
            dist[v] = max(dist[v],NINF);
        }
    }

    // for negative cycle check relaxtion for more n -1 times - 
    // n times for self loop

    for(long long i = 1;i<=n;i++){
        for(auto e : edges){
            long long u = e.first;
            long long v = e.second;
            long long w = e.third;
            if(dist[u] == INF) continue;
            dist[v] = max(dist[v],NINF);
            if(dist[u] + w < dist[v]){ // negative cycle detected as already n-1 upar kar chuke aur fir bhi koi kam wala mil raha matlab gadbad hai daya
                dist[v] = NINF;
            }
        }
    }
}


long long32_t main(){
   
    cin >> n >> m;
    dist.resize(n+1);
    edges.resize(m);
    for(long long i = 0;i<m;i++){
        struct edge inp;
        cin>>inp.first>>inp.second>>inp.third;
        inp.third *= -1;
        edges[i] = inp;
    }

    for(long long i = 2;i<=n;i++){
        dist[i] = INF;
    }
    bellman_ford();
    if(dist[n] == NINF){
        cout<<-1<<endl;
        return 0;
    }

    cout<<dist[n]*(-1)<<endl;
   
    
    
}
