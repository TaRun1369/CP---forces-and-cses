#include <bits/stdc++.h>
using namespace std;
#define long long long long
vector<vector<long long>> g;
// vector<long long> par;/
vector<long long> indegree;
vector<long long> ans;
long long n,m;
long long mod = 1e9 + 7;

void topo(queue<long long> &q){


    while(!q.empty()){
        long long t = q.front();
        q.pop();
        // cout<<t<<endl;
        for(long long it : g[t]){
                indegree[it]--;
                if(indegree[it] == 0){ 
                    if(it != 1)q.push(it);               
                //  par[it] = t; 
                 }
        }
    }
}
void topooo(queue<long long> &q){
    while(!q.empty()){
        long long t = q.front();
        q.pop();
        for(auto it : g[t]){
            indegree[it]--;
            ans[it] += ans[t];
            ans[it] %= mod;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }
}

long long32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    // par.assign(n+1,-1);
    ans.assign(n+1,0);
    indegree.assign(n+1,0);
    g.resize(n+1);
    ans[1] = 1;
    for(long long i = 0;i<m;i++){
        long long a,b;
        cin>>a>>b;
        g[a].push_back(b);
        indegree[b]++;
    }
    queue<long long> q;
     for(long long i = 2;i<=n;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
     topo(q);

     q.push(1);
     topooo(q);
    cout<<ans[n]%mod<<endl;


}