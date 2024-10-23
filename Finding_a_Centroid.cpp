
// #include<bits/stdc++.h>
// using namespace std;

// vector<long long> tree[200001];
// long long Subsize[200001];
// long long n,ans;

// long long dfs(long long node,long long par){
//     Subsize[node] = 1;
//     for(long long child : tree[node]){
//         if(child != par){
//             dfs(child,par);
//             Subsize[node]  += dfs(child,node);
//         }
//     }

//     return Subsize[node];
    

// }

// void dfscheck(long long node,long long par){
//     bool t = true;
//     for(long long child : tree[node]){
//         if(child != par){
//             if(Subsize[child] > n/2){
//                 t = false;
//             }
//         }
//     }

//     if(t == true && n - Subsize[node] < n/2){
//         ans = node;
//         return;
//     }
// }
// long long main() {
//     // long long n;
//     cin >> n;


//     for(long long i = 0; i < n-1; i++) {
//         long long a, b;
//         cin >> a >> b;
//         a--; b--;
//         tree[a].push_back(b);
//         tree[b].push_back(a);
//     }

//     dfs(0, -1); // Corrected to start DFS from node 0
//     // for(long long i = 0;i<n;i++) cout<<Subsize[i]<<" ";
//     cout<<ans<<endl;
// }

#include <bits/stdc++.h>
using namespace std;

vector<long long> tree[200001];
long long Subsize[200001];
long long n, ans;

long long dfs(long long node, long long par) {
    Subsize[node] = 1;
    for(long long child : tree[node]) {
        if(child != par) {
            Subsize[node] += dfs(child, node);
        }
    }
    return Subsize[node];
}

void dfscheck(long long node, long long par) {
    bool isCentroid = true;
    for(long long child : tree[node]) {
        if(child != par) {
            if(Subsize[child] > n / 2) {
                isCentroid = false;
            }
            dfscheck(child, node);
        }
    }

    if(n - Subsize[node] > n / 2) {
        isCentroid = false;
    }

    if(isCentroid) {
        ans = node;
    }
}

long long main() {
    cin >> n;

    for(long long i = 0; i < n - 1; i++) {
        long long a, b;
        cin >> a >> b;
        a--; b--;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    dfs(0, -1);
    dfscheck(0, -1);

    cout << ans + 1 << endl; // Output the 1-based index of the centroid
}
