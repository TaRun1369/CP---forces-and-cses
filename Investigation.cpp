#include<bits/stdc++.h>
using namespace std;
#define long long long long
long long n,m;
const long long mod = 1e9 + 7;
const long long INF = 1e17;
const long long maxn = 1e5 + 1;

vector<vector<pair<long long,long long>>> g(maxn);
vector<long long> cost(maxn);
vector<long long> route(maxn);
vector<long long> min_f(maxn);
vector<long long> max_f(maxn);
void dij(){
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
    pq.push({0,1});
    cost[1] = 0;
    route[1] = 1;

    while(!pq.empty()){
        auto t = pq.top();pq.pop();
        long long d = t.first;
        long long u = t.second;//baap

        for(auto it : g[u]){
            long long c = it.second;
            long long v = it.first;//bacha
            if(d + c > cost[v]) continue;

            if(c +d == cost[v]){
                route[v] += route[u];
                route[v] %= mod;
                min_f[v] = min(min_f[u] + 1,min_f[v]);
                max_f[v] = max(max_f[u] + 1,max_f[v]);
            }
            if(c+d < cost[v]){
                cost[v] = c+d;
                route[v] = route[u];
                min_f[v] = min_f[u] + 1;
                max_f[v] = max_f[u] + 1;
                pq.push({cost[v],v});
            }
        }
    }
}

long long32_t main(){
    cin>>n>>m;
    for(long long i = 0;i<m;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }
    for(long long i = 2;i<=n;i++){
        cost[i] = INF;
    }
    dij();
    cout<<cost[n]<<" "<<route[n]<<" "   <<min_f[n]<<" "<<max_f[n]<<endl;


}