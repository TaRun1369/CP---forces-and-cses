#include<bits/stdc++.h>
using namespace std;

class dsu{
    
    public:
    vector<long long> parent,rank,size;
    dsu(long long n){
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


};


bool cmp ( vector<long long> &a,vector<long long> &b){
    return a[2] < b[2];
}
long long main(){
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>> v;
    for(long long i = 0;i<n-1;i++){
        vector<long long> c(3);
        for(long long j =0;j<3;j++) cin>>c[j];
        v.push_back(c);
        // for(auto it : c) cout<<it<<endl;
    }

    

    sort(v.begin(),v.end(),cmp);
    vector<pair<long long,long long>> query;
dsu ds(n);
    for(long long i = 0;i<m;i++){
        long long q;
        cin>>q;
        query.push_back({q,i});
    }
    long long prev  = 0;
    // set<long long> vis;
    vector<long long> ans(m,0);
    sort(query.begin(),query.end());
    for(long long i  = 0 ;i<m;i++){
        auto t = query[i];
        long long j = prev;
        for(;j<n-1;j++){
            // cout<<it[2]<<endl;
            if(v[j][2] <= t.first){
                // cout<<it[2]<<endl;
                ds.unionbySize(v[j][0],v[j][1]);
            }
            else break;
        }
        prev = j;
        long long ans1=  0;

        for(long long i = 1;i<=n;i++){
            if(i == ds.findUPar(i)){
                long long s = ds.size[i] - 1;
                ans1 += s*(s+1)/2;
                // s.insert(i);
            }
        }
    // cout<<ans1<<endl;
    ans[t.second] = ans1;
    }

    for(auto it : ans) cout<<it<<" ";
}