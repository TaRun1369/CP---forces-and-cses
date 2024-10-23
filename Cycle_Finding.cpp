#include<bits/stdc++.h>
using namespace std;
#define long long long long
struct edge{
    public : 
    long long first;
    long long second;
    long long third;
};
long long n,m;
vector<edge>edges;
vector<long long> dist;
vector<long long> parent;//relaxant
void bellman_ford(){
    long long x;
    for (long long i = 1; i <= n; i++)
    {
         x = -1;
        for(auto it : edges){
            long long a = it.first;
            long long b = it.second;
            long long c = it.third;

            if(dist[a] + c < dist[b] ){
                dist[b] = dist[a] + c;
                x = b;
                parent[b] = a;
            }
        }    
    }
    //nth loop gives x ki value only if negative cycle exist

    if(x == -1){
        // no negative cycle 
        cout<<"NO"<<endl;
    }
    else{
        for(long long i = 1;i<=n;i++){
            // n times piche gaye taki aesa banda mile jo for sure negative cycle ke andar hoga 
            x = parent[x];
        }

        vector<long long> cycle;
        for(long long v = x; ; v = parent[v]){
            cycle.push_back(v);
            if(v == x && cycle.size() > 1) break;
        }
        reverse(cycle.begin(),cycle.end());
        cout<<"YES"<<endl;
        for(auto it : cycle){
            cout<<it<<" ";
        }

        cout<<endl;


    }
    
}

long long32_t main(){
    cin>>n>>m;
    dist.resize(n+1);
    parent.resize(n+1);edges.resize(m);
    for(long long i = 0;i<m;i++){
        struct edge inp;
        cin>>inp.first>>inp.second>>inp.third;
        edges[i] = inp;
    }

    for(long long i = 1;i<=n;i++){
        parent[i] = -1;
    }
    bellman_ford();

}