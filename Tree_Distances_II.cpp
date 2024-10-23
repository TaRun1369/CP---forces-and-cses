
#include<bits/stdc++.h>
using namespace std;
vector<long long> tree[200001];
long long subtreeAns[200001];
long long noOfnodesinSubtree[200001];
long long ans[200001];
void solve(long long curr,long long par){
       long long ans = 0;
       long long nochild = 1;
   for(long long child : tree[curr]){
    if(child != par){
        solve(child,curr);
        nochild += noOfnodesinSubtree[child];
        ans += subtreeAns[child] + noOfnodesinSubtree[child] ;
        
    }
   }
   subtreeAns[curr] = ans;
   noOfnodesinSubtree[curr] = nochild ;
}

void answer(long long node,long long par,long long par_ans,long long &total){
    ans[node] = subtreeAns[node] + (par_ans + (total - noOfnodesinSubtree[node]));
    
    for(long long child : tree[node]){
        if(child != par){
            answer(child,node,ans[node] - subtreeAns[child] - noOfnodesinSubtree[child],total);
        }
    }

    


}

long long main() {
    long long n;
    cin>>n;

    for(long long i=2;i<=n;i++){
        long long u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    solve(1,0);
    answer(1,0,0,n);
    // for(long long i = 1;i<=n;i++) cout<<subtreeAns[i]<<" ";
    // cout<<endl;
    // for(long long i = 1;i<=n;i++) cout<<noOfnodesinSubtree[i]<<" ";
    for(long long i = 1;i<=n;i++) cout<<ans[i]<<" ";

}
