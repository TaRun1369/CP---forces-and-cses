
#include<bits/stdc++.h>
using namespace std;
vector<long long> tree[50001];
long long dp1[50001][501];// kitne bande hai node ke kth depth pe
long long dp2[50001][501];
void solve1(long long curr,long long par,long long &k){
   for(long long child : tree[curr]){
    if(child != par){
        solve1(child,curr,k);  
    }
   }
    dp1[curr][0] = 1;
    for(long long dist = 1;dist <= k;dist++){
        dp1[curr][dist] = 0;
        for(long long child : tree[curr]){
            if(child != par){
                dp1[curr][dist] += dp1[child][dist-1];
            }
        }
    }
}

void solve(long long node,long long par,long long &k){
    for(long long dis = 0;dis<=k;dis++){
        dp2[node][dis] = dp1[node][dis];

    }
    if(par != 0){
        // if not root
        dp2[node][1] += dp2[par][0];
        for(long long dis = 2;dis <= k;dis++){
            dp2[node][dis] += dp2[par][dis - 1];
            dp2[node][dis] -= dp1[node][dis - 2];
        }
    }

    for(long long child : tree[node]){
        if(child != par){
            solve(child,node,k);
        }
    }
}


long long main() {
    long long n,k;
    cin>>n>>k;

    for(long long i=2;i<=n;i++){
        long long u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    solve1(1,0,k);
    solve(1,0,k);
    long long ans = 0;
    for(long long i = 1;i<=n;i++) ans += dp2[i][k];
    cout<<ans/2<<endl;
    // answer(1,0,0,n);
    // // for(long long i = 1;i<=n;i++) cout<<subtreeAns[i]<<" ";
    // // cout<<endl;
    // // for(long long i = 1;i<=n;i++) cout<<noOfnodesinSubtree[i]<<" ";
    // for(long long i = 1;i<=n;i++) cout<<ans[i]<<" ";

}
