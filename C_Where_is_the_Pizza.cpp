// // #include<bits/stdc++.h>
// // using namespace std;

// // class dsu{
    
// //     public:
// //     vector<long long> parent,rank,size;
// //     dsu(long long n){
// //         rank.resize(n+1,0);
// //         parent.resize(n+1);
// //         size.resize(n+1,1);
// //         for(long long i=0;i<=n;i++){
// //             parent[i]=i;
// //         }
// //     }
    
// //     long long findUPar(long long node){
// //         if(node == parent[node]){
// //             return node;
// //         }
// //         return parent[node]=findUPar(parent[node]); // path compression
// //     }

// //     void unionbyRank(long long u,long long v){
// //         long long ulp_u =  findUPar(u);

// //         long long ulp_v = findUPar(v);
// //         if(ulp_u == ulp_v) return;
// //         if(rank[ulp_u] < rank[ulp_v]){
// //             parent[ulp_u] = ulp_v;
// //         }
// //         else if(rank[ulp_v] < rank[ulp_u]){
// //             parent[ulp_v] = ulp_u;
// //         }
// //         else{
// //             // koi bhi bann sakta 
// //             parent[ulp_v] = ulp_u;
// //             rank[ulp_u]++; 
// //         }
// //     }



// //      void unionbySize(long long u,long long v){
// //         long long ulp_u =  findUPar(u);

// //         long long ulp_v = findUPar(v);
// //         if(ulp_u == ulp_v) return;
// //         if(size[ulp_u] < size[ulp_v]){
// //             parent[ulp_u] = ulp_v;
// //             size[ulp_v] += size[ulp_u];
// //         }
        
// //         else{
// //             // koi bhi bann sakta 
// //             parent[ulp_v] = ulp_u;
// //             size[ulp_u]+=size[ulp_v]; 
// //         }
// //     }


// // };

// // long long main(){
// //     long long tc;
// //     cin>>tc;
// //     while(tc--){
// //         long long n;
// //         cin>>n;
// //         vector<long long>v1(n),v2(n),c(n);
// //         for(long long i = 0;i<n;i++) cin>>v1[i];
// //         for(long long i = 0;i<n;i++) cin>> v2[i];
// //         dsu ds(n+1);
// //         for(long long i=0;i<n;i++){
// //             // long long u,v;
// //             // cin>>u>>v;
// //             ds.unionbySize(v1[i],v2[i]);
// //         }
// //         set<long long> s;
// //         for(long long i = 0;i<n;i++){
// //             cin>>c[i];
// //             long long u = ds.findUPar(c[i]);
// //             s.insert(u);
// //         }

// //         long long count = 0;
// //         for(long long i = 1;i<=n;i++){
// //             if(i == ds.findUPar(i)){
// //                 if(s.find(i) == s.end() ) count++;
// //             }
// //         }

// //         cout<<pow(2,count)%(1e9 + 7)<<endl;
// //     }
// //     return 0;
// // }




// #include <bits/stdc++.h>
// using namespace std;

// class dsu {
// public:
//     vector<long long> parent, rank, size;
//     dsu(long long n) {
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
//         } else if (rank[ulp_v] < rank[ulp_u]) {
//             parent[ulp_v] = ulp_u;
//         } else {
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
//         } else {
//             parent[ulp_v] = ulp_u;
//             size[ulp_u] += size[ulp_v];
//         }
//     }
// };

// long long main() {
//     long long tc;
//     cin >> tc;
//     while (tc--) {
//         long long n;
//         cin >> n;
//         vector<long long> v1(n), v2(n), c(n);
//         for (long long i = 0; i < n; i++) cin >> v1[i];
//         for (long long i = 0; i < n; i++) cin >> v2[i];
//         dsu ds(n + 1);
//         for (long long i = 0; i < n; i++) {
//             ds.unionbySize(v1[i], v2[i]);
//         }
//         set<long long> s;
//         for (long long i = 0; i < n; i++) {
//             cin >> c[i];
//             long long u = ds.findUPar(c[i]);
//             s.insert(u);
//         }

//         long long count = 0;
//         for (long long i = 1; i <= n; i++) {
//             if (i == ds.findUPar(i)) {
//                 if (s.find(i) == s.end() && ds.size[i] > 1) count++;
//             }
//         }

//         cout << (long long)pow(2, count) % ((long long)1e9 + 7) << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class dsu {
public:
    vector<long long> parent, rank, size;
    dsu(long long n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (long long i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    long long findUPar(long long node) {
        if (node == parent[node]) {
            return node;
        }
        return parent[node] = findUPar(parent[node]); // path compression
    }

    void unionbyRank(long long u, long long v) {
        long long ulp_u = findUPar(u);
        long long ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        } else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        } else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionbySize(long long u, long long v) {
        long long ulp_u = findUPar(u);
        long long ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

const long long MOD = 1e9 + 7;

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

long long main() {
    long long tc;
    cin >> tc;
    while (tc--) {
        long long n;
        cin >> n;
        vector<long long> v1(n), v2(n), c(n);
        for (long long i = 0; i < n; i++) cin >> v1[i];
        for (long long i = 0; i < n; i++) cin >> v2[i];
        dsu ds(n + 1);
        for (long long i = 0; i < n; i++) {
            ds.unionbySize(v1[i], v2[i]);
        }
        set<long long> s;
        for (long long i = 0; i < n; i++) {
            cin >> c[i];
            long long u = ds.findUPar(c[i]);
            s.insert(u);
        }

        long long count = 0;
        for (long long i = 1; i <= n; i++) {
            if (i == ds.findUPar(i)) {
                if (s.find(i) == s.end() && ds.size[i] > 1) count++;
            }
        }

        cout << modExp(2, count, MOD) << endl;
    }
    return 0;
}
