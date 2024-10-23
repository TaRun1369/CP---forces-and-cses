
#include<bits/stdc++.h>
using namespace std;
vector<long long> graph[100001];
long long vis[100001] = {0};
long long color[100001] = {0};

bool dfs(long long node,long long col){
    vis[node] = 1;
    color[node] = col;
    for(auto it : graph[node]){
        if(!vis[it]){
            if(!dfs(it,3-col)) return false;
        }
        else if(color[it] == color[node]){
            // cout<<node<<" "<<it<<endl;
            return false;
        }
    }

    return true;
}
long long main() {
    long long n, e;
    cin >> n >> e;
    for(long long i  =0 ;i<e;i++){
        long long a,b;
        cin>>a>>b;
        graph[a].push_back(b);  
        graph[b].push_back(a);
    }
    bool ans = true;
    for(long long i = 1;i<=n;i++){
        if(!vis[i]){
            ans &= dfs(i,1);
        }
    }
    if(ans == false){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
    for(long long i= 1;i<=n;i++){
        cout<<color[i]<<" ";
    }
    }
    
}

// #include <bits/stdc++.h>
// using namespace std;

// vector<long long> graph[100001];
// long long vis[100001] = {0}; // Initialize vis array to 0
// long long color[100001] = {0}; // Initialize color array to 0

// bool dfs(long long node, long long col) {
//     vis[node] = 1;
//     color[node] = col;
//     for (auto it : graph[node]) {
//         if (!vis[it]) {
//             if (col == 1) {
//                 if (!dfs(it, 2)) return false;
//             } else {
//                 if (!dfs(it, 1)) return false;
//             }
//         } else if (color[it] == color[node]) {
//             return false;
//         }
//     }
//     return true;
// }

// long long main() {
//     long long n, e;
//     cin >> n >> e;
//     for (long long i = 0; i < e; i++) {
//         long long a, b;
//         cin >> a >> b;
//         graph[a].push_back(b);
//         graph[b].push_back(a);
//     }
//     bool ans = true;
//     for (long long i = 1; i <= n; i++) {
//         if (!vis[i]) {
//             ans &= dfs(i, 1);
//         }
//     }
//     if (!ans) {
//         cout << "IMPOSSIBLE" << endl;
//     } else {
//         for (long long i = 1; i <= n; i++) {
//             cout << color[i] << " ";
//         }
//         cout << endl;
//     }
// }
