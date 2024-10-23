#include<bits/stdc++.h>
using namespace std;
#define long long long long

class dsu{
   
    public:
     vector<long long> parent,rank,size;
    long long n1;
    dsu(long long n){
        
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(long long i=0;i<=n;i++){
            parent[i]=i;
        }
        n1 = n;
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

    long long noofcomponent(){
        long long ans = 0;
        for(long long i = 1;i<=n1;i++){
            if(findUPar(i) == i) ans++;
        }
        return ans;
    }

    long long largestsize(){
        long long maxi = 1;
        for(long long i = 1;i<=n1;i++){
            maxi = max(maxi , size[findUPar(i)]);
        }
        return maxi;
    }


};

long long32_t main(){
    long long n,e;
    cin>>n>>e;
    dsu ds(n);
    vector<vector<long long>> graph;
    long long ans = n ;
    long long maxi = 1;

    for(long long i=0;i<e;i++){
        long long u,v;
        cin>>u>>v;
        // graph.push_back({c,u,v});
        if(ds.findUPar(u) != ds.findUPar(v)) ans--;
        ds.unionbySize(u,v);
        // cout<<ds.noofcomponent()<<" "<<ds.largestsize()<<endl;
        cout<<ans<<" "<<max(maxi, ds.size[ds.findUPar(v)])<<endl;
        
        
        maxi = max(maxi,ds.size[ds.findUPar(v)]);
    }    
}


// Output:

// 14