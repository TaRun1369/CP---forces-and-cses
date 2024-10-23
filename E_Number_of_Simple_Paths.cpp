#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long n = 2e5 + 5;
vector<vector<long long>> adj(n);
vector<long long> par(n);
vector<bool> vis(n);
vector<long long> cycle;
bool foundcycle;
vector<bool> isoncycle(n);
vector<long long>sub(n);
 // for finding cycle
void dfs(long long u,long long p){
    if(foundcycle) return;

    par[u] = p;
    vis[u]=1;
    for(auto v : adj[u]){
        if(foundcycle) return;
        if(!vis[v]) dfs(v,u);
        else if(v != p){
            foundcycle = true;
            while(u != v){
                isoncycle[u] = 1;
                cycle.push_back(u);
                u = par[u];
            }
            isoncycle[u] = 1;
            cycle.push_back(u);
            return;
        }
    }
}

long long dfs2(long long u,long long p){
     sub[u] = 1;
     for(auto v : adj[u]){
        if(!isoncycle[v] && v != p) sub[u] += dfs2(v,u);
     }
     return sub[u];
}

long long main() {

    long long t;
    cin>>t;
    while(t--){
            cin>>n;
            foundcycle = false;
            cycle.clear();
            for(long long i = 0;i<n;i++){
                adj[i].clear();
                par[i] = -1;
                isoncycle[i] = 0;
                vis[i] = 0;
                sub[i] = 0;
            }
            for(long long i = 0;i<n;i++){
                long long u,v;
                cin>>u>>v;
                adj[u-1].push_back(v-1);
                adj[v-1].push_back(u-1);
            }
            dfs(0,-1);
            ll ans = 1ll*n*(1ll*n-1);
            for(long long u : cycle){
                dfs2(u,-1);
                ll data = sub[u];
                ans -= data*(data-1)/2;
            }
            cout<<ans<<endl;
    }
    return 0;
}



class Solution {
  public:
  long long height(Node* root)
    {
    // Base case: empty tree has height 0
    if (root == nullptr)
        return 0;
 
    // recur for left and right subtree and consider maximum depth
    return 1 + max(height(root->left), height(root->right));
    }
  Node* mini(Node* node2,Node* node1){
      long long h1 = height(node1);
      long long h2 = height(node2);
      if(h1 > h2) return node2;
      else return node1;
  }
  void maxi(Node* curr,Node* naya,map<long long,Node*> &mp){
      long long h1 = height(curr);
      long long h2 = height(naya);
      if(h1 > h2) {
          mp[curr->data] = curr;
      }
      else{
          mp[curr->data] = naya;
      }
  }
  void dfs(map<long long,Node*> &mp,Node* root,vector<Node*> &ans){
      if(mp.find(root->data) != mp.end()){
          ans.push_back(mini(root,mp[root->data]));
          maxi(root,mp[root->data],mp);
          
      }
      else{
          mp[root->data] = root;
      }
      dfs(mp,root->left,ans);
      dfs(mp,root->right,ans);
      
      
  }
    vector<Node*> prlong longAllDups(Node* root) {
        // Code here
        vector<Node*> ans;
        map<long long,Node*> mp;
        dfs(mp,root,ans);
        return ans;
    }
};