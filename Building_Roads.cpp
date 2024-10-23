#include<bits/stdc++.h>
using namespace std;


vector<vector<long long>> ans;

class dsu{
    vector<long long> parent,rank,size;
    long long n1;
    public:
    dsu(long long n){
         n1 = n;
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(long long i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    
    long long findUPar(long long node){
        if(node == parent[node]){
            return node;
        }
        return parent[node]=findUPar(parent[node]); // path compression
    }

    void unionbyRank(long long u,long long v){
        long long ulp_u =  findUPar(u);

        long long ulp_v = findUPar(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]){
            parent[ulp_v] = ulp_u;
        }
        else{
            // koi bhi bann sakta 
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++; 
        }
    }



     void unionbySize(long long u,long long v){
        long long ulp_u =  findUPar(u);

        long long ulp_v = findUPar(v);
        if(ulp_u == ulp_v) return;
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        
        else{
            // koi bhi bann sakta 
            parent[ulp_v] = ulp_u;
            size[ulp_u]+=size[ulp_v]; 
        }
    }

    void answer(){
        long long prev = -1;
        for(long long i = 1;i<=n1;i++){
            if(findUPar(i) == i){
                // cout<<" b k l - "<<i<<endl;
                if(prev != -1){
                    ans.push_back({prev,i});
                }
                prev = i;
            }
           

        }
    }
};

long long main(){
    long long n,m;
    cin>>n>>m;
    dsu ds(n);
    for(long long i = 0;i<m;i++){
        long long a,b;
        cin>>a>>b;
        ds.unionbySize(a,b);
    }

    ds.answer();

    cout<<ans.size()<<endl;
    for(auto it : ans){
        cout<<it[0]<<" "<<it[1]<<endl;
    }

}
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<long long>> ans;

// class dsu {
//     vector<long long> parent, rank, size;
//     long long n1;
// public:
//     dsu(long long n) {
//         n1 = n;
//         rank.resize(n + 1, 0);
//         parent.resize(n + 1);
//         size.resize(n + 1, 1);
//         for (long long i = 0; i <= n; i++) {
//             parent[i] = i;
//         }
//     }
    
//     long long findUPar(long long node) {
//         if (node == parent[node]) {
//             return node;
//         }
//         return parent[node] = findUPar(parent[node]); // path compression
//     }

//     void unionbyRank(long long u, long long v) {
//         long long ulp_u = findUPar(u);
//         long long ulp_v = findUPar(v);
//         if (ulp_u == ulp_v) return;
//         if (rank[ulp_u] < rank[ulp_v]) {
//             parent[ulp_u] = ulp_v;
//         }
//         else if (rank[ulp_v] < rank[ulp_u]) {
//             parent[ulp_v] = ulp_u;
//         }
//         else {
//             parent[ulp_v] = ulp_u;
//             rank[ulp_u]++;
//         }
//     }

//     void unionbySize(long long u, long long v) {
//         long long ulp_u = findUPar(u);
//         long long ulp_v = findUPar(v);
//         if (ulp_u == ulp_v) return;
//         if (size[ulp_u] < size[ulp_v]) {
//             parent[ulp_u] = ulp_v;
//             size[ulp_v] += size[ulp_u];
//         }
//         else {
//             parent[ulp_v] = ulp_u;
//             size[ulp_u] += size[ulp_v];
//         }
//     }

//     void answer() {
//         long long prev = -1;
//         for (long long i = 1; i <= n1; i++) {
//             if (findUPar(i) == i) {
//                 if (prev != -1) {
//                     ans.push_back({ prev, i });
//                 }
//                 prev = i;
//             }
//         }
//     }
// };

// long long main() {
//     long long n, m;
//     cin >> n >> m;
//     dsu ds(n);
//     for (long long i = 0; i < m; i++) {
//         long long a, b;
//         cin >> a >> b;
//         ds.unionbySize(a, b);
//     }

//     ds.answer();

//     cout << ans.size() << endl;
//     for (auto it : ans) {
//         cout << it[0] << " " << it[1] << endl;
//     }
//     return 0;
// }
