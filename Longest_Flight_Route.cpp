#include <bits/stdc++.h>
using namespace std;
#define long long long long
vector<vector<long long>> g;
vector<long long> par;
vector<long long> indegree;
vector<long long> ans;
long long n,m;

void topo(queue<long long> &q){
    // vis.assign(n+1,0);
    // queue<long long>q;
   

    while(!q.empty()){
        long long t = q.front();
        q.pop();
        // cout<<t<<endl;
        for(long long it : g[t]){
            // if(!vis[it]){
                indegree[it]--;
                if(indegree[it] == 0){ 
                    if(it != 1)q.push(it);               
                 par[it] = t; 
                 }
            // }
        }
    }
}



long long32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    par.assign(n+1,-1);
    indegree.assign(n+1,0);
    g.resize(n+1);
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
    par[1] = -1;
    par[n] = -1;
    q.push(1);
    // cout<<"ab 1 ki baari"<<endl;
    topo(q);
    if(par[n] == -1) 
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        // cout<<1 + dist[n] * (-1)<<endl;
        long long curr = n;
        while(par[curr] != -1){
            ans.push_back(curr);
            curr = par[curr];
        }
        ans.push_back(1);
        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        for(auto u : ans){
            cout<<u<<" ";
        }
    }


}
// #include<bits/stdc++.h>
// using namespace std;
 
// #define ll                  long long long long
// #define mod                 1000000007
// #define inf                 1e9
// #define endl                "\n"
// #define pb                  push_back
// #define vi                  vector
// #define ff                  first
// #define ss                  second
// #define loop(i,a,b)         for(long long i=a ; i<=b ; i++)
     


// const long long N =1e6;
// // vector<long long> Adj(N,vector());
// vector<vector<long long>> Adj;

// vector<long long> Par(N,-1);
// vector<long long> Deg(N,0);
 
// void topo(queue< long long > &Q)
// {
//     while(!Q.empty())
//     {
//         long long x = Q.front();
//         Q.pop();
 
//         for(ll t : Adj[x])
//         {
//             Deg[t]--;
//             if(Deg[t] == 0)
//             {   
//                 Par[t] = x;
//                 if(t != 1)
//                 {
//                     Q.push(t);
//                 }
                
//             }
//         }
//     }
// }
 
// long long main(long long argc, char const *argv[])
// {
//     /* code */
    
//     ll n,m;
//     cin>>n>>m;
//     Adj.resize(n+1);
//     ll a,b;
//     for(ll i= 1; i<=n ; i++)
//     {
//         Deg[i] = 0;
//         Par[i] =-1;
//     }
//     loop(i,0,m-1)
//     {
//         cin>>a>>b;
//         Adj[a].pb(b);
//         Deg[b]++;
//     }
 
 
 
//     queue< long long > Q;
//     for(ll i= 2; i<=n;i++)
//     {
//         if(Deg[i] == 0)
//         {
//             Q.push(i);
//         }
//     }
//     topo(Q);
//     Q.push(1);
//     Par[n] = -1;
//     Par[1] = -1;
//     topo(Q);
 
//     if(Par[n] == -1)
//     {
//         cout<<"IMPOSSIBLE";
//     }
//    else
//     {
//         ll cur = n;
//         vector<long long> Ans;
//         while(Par[cur] != -1)
//         {
//             Ans.push_back(cur);
//             cur = Par[cur];
//         }
//         Ans.push_back(1);
//         cout<<Ans.size()<<endl;
//         reverse(Ans.begin(),Ans.end());
//         loop(i,0,Ans.size()-1)
//         {
//             cout<<Ans[i]<<" ";
//         }
//     }
 
//     return 0;
// }