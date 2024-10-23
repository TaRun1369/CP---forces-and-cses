
#include<bits/stdc++.h>
using namespace std;

long long bit[200001];
long long Tend[200001];
long long Tstart[200001];
long long value[200001];
vector<long long> adj[200001];
long long n,q,timer;

void update(long long i ,long long val){
    for(;i<=n;i+= i&-i){
        bit[i] = max( bit[i],val);
    }
}

long long query(long long i){
    long long sum = 0;
    for(;i>0;i-= i & -i){
        sum = max(sum,bit[i]);
    }
    return sum;
}

void dfs(long long u,long long p){
    Tstart[u] = ++timer;
    update(timer,value[u]);
    for(long long v : adj[u]){
        if(v != p){
            dfs(v,u);
        }
    }
    Tend[u] = timer;
}
long long main(){
    
    cin>>n>>q;
    for(long long i = 1;i<=n;i++){
        cin>>value[i];
    }

    for(long long i = 0;i<n-1;i++){
        long long a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    long long type;
    long long s,x;
    dfs(1,0); // child , parent
    //timer set
    while(q--){
        cin>>type;
        if(type == 1){
            cin>>s>>x;
            update(Tstart[s],-value[s]);
            value[s] = x;
            update(Tstart[s],value[s]);
        }
        else{
            long long a,b;
            cin>>a>>b;
            
            long long baap = lca(a,b);
            cout<<max(query(Tstart[baap])
        }
    }

}


