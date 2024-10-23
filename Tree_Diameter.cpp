
#include<bits/stdc++.h>
using namespace std;
vector<long long> tree[200001];
long long height[200001];
long long dist = 0;
void solve(long long curr,long long par){
   
   bool leaf = true;
   long long ans = 0;
   long long secondmax = 0;
   height[curr] = 0;

   for(long long child : tree[curr]){
    if(child != par){
        leaf = false;
        solve(child,curr);
        // ans = max(ans,height[child] + 1);
        if(height[child] + 1 >= ans){
            secondmax = ans;
            ans = height[child] + 1;
        }
        else if(secondmax == 0){
            secondmax = max(secondmax,height[child] + 1);
        }
    }
   }
   if(leaf == true) return;
    
   height[curr] = ans;
   dist = max(dist,ans + secondmax);

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

    solve(1,-1);
    cout<<dist<<endl;

}
