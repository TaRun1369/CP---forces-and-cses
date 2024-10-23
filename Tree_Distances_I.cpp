
#include<bits/stdc++.h>
using namespace std;
vector<long long> tree[200001];
long long height[200001];
long long ans[200001];
void solve(long long curr,long long par){
       long long ans = 0;
   for(long long child : tree[curr]){
    if(child != par){
        solve(child,curr);
        ans = max(ans,height[child] + 1);
    }
   }
   height[curr] = ans;
}

void answer(long long node,long long par,long long par_ans){
    vector<long long> prefix;
    vector<long long> suffix;

    for(long long child : tree[node]){
        if(child != par){
            prefix.push_back(height[child]); // prefix  max
            suffix.push_back(height[child]); // suffix max
        }
    }


    for(long long i = 1;i<prefix.size();i++){
        prefix[i] = max(prefix[i],prefix[i-1]);
    }
    for(long long i = suffix.size() - 2;i >= 0;i--){
        suffix[i] = max(suffix[i],suffix[i+1]);
    }

    long long childNo = 0;
    for(long long child : tree[node]){
        if(child != par){
            long long option1 =( childNo == 0) ? long long_MIN : prefix[childNo - 1];
            long long option2 = (childNo == suffix.size() - 1) ? long long_MIN : suffix[childNo + 1];
            long long partialans = 1 + max(par_ans, max(option1,option2));
            answer(child,node,partialans);
            childNo++;
        }
    }

    ans[node] = 1 + max(par_ans,(prefix.empty() ? -1 : prefix.back()));


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
    answer(1,0,-1);
    for(long long i = 1;i<=n;i++) cout<<ans[i]<<" ";
}
