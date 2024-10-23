// #include<bits/stdc++.h>
// using namespace std;

// class dsu{
   
//     public:
//      vector<long long> parent,rank,size;
//     dsu(long long n){
//         rank.resize(n+1,0);
//         parent.resize(n+1);
//         size.resize(n+1,1);
//         for(long long i=0;i<=n;i++){
//             parent[i]=i;
//         }
//     }
    
//     long long findUPar(long long node){
//         if(node == parent[node]){
//             return node;
//         }
//         return parent[node]=findUPar(parent[node]); // path compression
//     }

//     void unionbyRank(long long u,long long v){
//         long long ulp_u =  findUPar(u);

//         long long ulp_v = findUPar(v);
//         if(ulp_u == ulp_v) return;
//         if(rank[ulp_u] < rank[ulp_v]){
//             parent[ulp_u] = ulp_v;
//         }
//         else if(rank[ulp_v] < rank[ulp_u]){
//             parent[ulp_v] = ulp_u;
//         }
//         else{
//             // koi bhi bann sakta 
//             parent[ulp_v] = ulp_u;
//             rank[ulp_u]++; 
//         }
//     }



//      void unionbySize(long long u,long long v){
//         long long ulp_u =  findUPar(u);

//         long long ulp_v = findUPar(v);
//         if(ulp_u == ulp_v) return;
//         if(size[ulp_u] < size[ulp_v]){
//             parent[ulp_u] = ulp_v;
//             size[ulp_v] += size[ulp_u];
//         }
        
//         else{
//             // koi bhi bann sakta 
//             parent[ulp_v] = ulp_u;
//             size[ulp_u]+=size[ulp_v]; 
//         }
//     }


// };
// bool isdataid(long long r,long long c,long long n,long long m){
//     return r >= 0 && c>=0 && r<n && c<m;
// }
// long long main(){
//     long long tc;
//     cin>>tc;
//     while(tc--){
//             long long n,m;
//             cin>>n>>m;
//             dsu ds(n*m);

//             vector<vector<char>> ip(n,vector<char>(m));
//             for(long long i=0;i<n;i++){
//                 for(long long j=0;j<m;j++){
//                     cin>>ip[i][j];
//                 }
//             }

//             for(long long i = 0;i<n;i++){
//                 for(long long j = 0;j<m;j++){
//                     if(ip[i][j] == '#'){

//                             long long dx[] = {1,0,-1,0};
//                             long long dy[] = {0,1,0,-1};
//                             for(long long k = 0;k<4;k++){
//                                 long long adjr = i + dx[k];
//                                 long long adjc = j + dy[k];
//                                 if(isdataid(adjr,adjc,n,m)){
//                                     if(ip[adjr][adjc] == '#'){
//                                         long long t = i*m + j;
//                                         long long adjt = adjr*m + adjc;
//                                         ds.unionbySize(t,adjt);
//                                     }
//                                 }
//                             }
                        
//                     }
//                 }
//             }

//             long long maxi = 0;
//             for(long long i = 0;i<n;i++){
//                 set<long long>s; // leaders ka set
//                 long long c = 0;
//                 for(long long j = 0;j < m;j++){
                    
//                     if(ip[i][j] == '#') s.insert(ds.findUPar(i*m + j));
//                     else{
//                         c++;
//                         if(i - 1 >= 0){

//                             if(ip[i-1][j] == '#'){
                                
//                                 long long t = (i-1)*m + j;
//                                 s.insert(ds.findUPar(t));
//                             }
//                         }
//                         if(i +1  < n){
//                             if(ip[i+1][j] == '#'){
//                                 long long t = (i+1)*m + j;
//                                 long long up = ds.findUPar(t);
//                                 s.insert(up);
//                             }
//                         }
//                     }
//                 }
//                 for(auto it : s){
//                     c += ds.size[it];
//                 }
//                 maxi = max(c,maxi);
//             }

//             for(long long i = 0;i<m;i++){
//                 set<long long>s; // leaders ka set
//                 long long c = 0;
//                 for(long long j = 0;j < n;j++){
                    
//                     if(ip[j][i] == '#') s.insert(ds.findUPar(j*m + i));
//                     else{
//                         c++;
//                         if(i - 1 >= 0){

//                             if(ip[j][i-1] == '#'){
                                
//                                 long long t = (j)*m + i - 1;
//                                 s.insert(ds.findUPar(t));
//                             }
//                         }
//                         if(i +1  < m){
//                             if(ip[j][i+1] == '#'){
//                                 long long t = (j)*m + i + 1;
//                                 long long up = ds.findUPar(t);
//                                 s.insert(up);
//                             }
//                         }
//                     }
//                 }
//                 for(auto it : s){
//                     c += ds.size[it];
//                 }
//                 maxi = max(c,maxi);
//             }


            


//             cout<<maxi<<endl;


//     }
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

bool isdataid(long long r, long long c, long long n, long long m) {
    return r >= 0 && c >= 0 && r < n && c < m;
}

long long main() {
    long long tc;
    cin >> tc;
    while (tc--) {
        long long n, m;
        cin >> n >> m;
        dsu ds(n * m);

        vector<vector<char>> ip(n, vector<char>(m));
        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < m; j++) {
                cin >> ip[i][j];
            }
        }

        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < m; j++) {
                if (ip[i][j] == '#') {
                    long long dx[] = {1, 0, -1, 0};
                    long long dy[] = {0, 1, 0, -1};
                    for (long long k = 0; k < 4; k++) {
                        long long adjr = i + dx[k];
                        long long adjc = j + dy[k];
                        if (isdataid(adjr, adjc, n, m)) {
                            if (ip[adjr][adjc] == '#') {
                                long long t = i * m + j;
                                long long adjt = adjr * m + adjc;
                                ds.unionbySize(t, adjt);
                            }
                        }
                    }
                }
            }
        }

        long long maxi = 0;
        for (long long i = 0; i < n; i++) {
            set<long long> s; // leaders ka set
            long long c = 0;
            for (long long j = 0; j < m; j++) {
                if (ip[i][j] == '#') s.insert(ds.findUPar(i * m + j));
                else {
                    c++;
                    if (i - 1 >= 0) {
                        if (ip[i - 1][j] == '#') {
                            long long t = (i - 1) * m + j;
                            s.insert(ds.findUPar(t));
                        }
                    }
                    if (i + 1 < n) {
                        if (ip[i + 1][j] == '#') {
                            long long t = (i + 1) * m + j;
                            long long up = ds.findUPar(t);
                            s.insert(up);
                        }
                    }
                }
            }
            for (auto it : s) {
                c += ds.size[it];
            }
            maxi = max(c, maxi);
        }

        for (long long i = 0; i < m; i++) {
            set<long long> s; // leaders ka set
            long long c = 0;
            for (long long j = 0; j < n; j++) {
                if (ip[j][i] == '#') s.insert(ds.findUPar(j * m + i));
                else {
                    c++;
                    if (i - 1 >= 0) {
                        if (ip[j][i - 1] == '#') {
                            long long t = j * m + i - 1;
                            s.insert(ds.findUPar(t));
                        }
                    }
                    if (i + 1 < m) {
                        if (ip[j][i + 1] == '#') {
                            long long t = j * m + i + 1;
                            long long up = ds.findUPar(t);
                            s.insert(up);
                        }
                    }
                }
            }
            for (auto it : s) {
                c += ds.size[it];
            }
            maxi = max(c, maxi);
        }

        cout << maxi << endl;
    }
}
