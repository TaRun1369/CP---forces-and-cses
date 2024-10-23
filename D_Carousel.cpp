#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;

void setIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void dfs(long long node, vector<vector<long long>>& adj, vector<bool>& vis, vector<long long>& col) {
    vis[node] = true;    
    for (auto it : adj[node]) {
        if (col[it] == col[node]){ col[it] = 2;}
        else if (!vis[it]) {
            col[it] = !col[node];
            dfs(it, adj, vis, col);
        }
    }

    return;
}

long long main() {
    setIO();    
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ip(n);
        for(long long i = 0;i<n;i++){
            cin>>ip[i];
        }
        vector<long long> col(n, -1);
        vector<bool> vis(n, 0);
        vector<vector<long long>> adj(n);

        for (long long i = 0; i < n-1; i++) {
            if(ip[i] != ip[i+1]){
            
            adj[i].push_back(i +  1);
            adj[i + 1 ].push_back(i);
            }
        }
        if(ip[0] != ip[n-1]) {
            adj[0].push_back(n-1);
            adj[n-1 ].push_back(0);
        }

        // for(auto it : adj){
        //     for(auto iss : it){
        //         cout<<iss<<" ";
        //     }
        //     cout<<endl;
        // }

    
        for (long long i = 0; i < n; i++) {
            if (!vis[i]) {
                col[i] = 0;
                dfs(i,adj,vis,col);
            }
        }
        long long maxi = 1;
        for(auto it : col){
            maxi = max(maxi,it+1);
        
        }
        cout<<maxi<<endl;
         for(auto it : col){
            cout<<it + 1<<" ";
        }
        cout<<endl;
    }


    return 0;
}
