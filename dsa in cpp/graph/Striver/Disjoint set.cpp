/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

class DisjointSet{
    vector<int> rank ,parent,size;
    public:
    DisjointSet(int n){
        rank.resize(n+1);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }

    }


    // path compression technique
    int findUltimateParent(int x){
        if(parent[x]==x){
            return x;
        }
        return parent[x]=findUltimateParent(parent[x]);
    }


    // union by rank
    // rank of a node is the height of the tree
    // rank of a node is the maximum distance of a node from the leaf node

    void unionByRank(int u,int v){
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if(ulp_u==ulp_v){
            return;
        }
        if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v]=ulp_u;
        }
        else if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u,int v){
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if(ulp_u==ulp_v){
            return;
        }
        if(size[ulp_u]>size[ulp_v]){
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
        else{
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
    }



    // display in graph format 
    // ultimate parent -> parent of next child -> parent of next child -> .....
    void displayGraph(){
        for(int i=0;i<parent.size();i++){
            cout<<i<<"->";
            int temp = i;
            while(parent[temp]!=temp){
                cout<<parent[temp]<<"->";
                temp = parent[temp];
            }
            cout<<endl;
        }
    }



};


int main()
{
    DisjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);

    ds.unionBySize(4,5);
    ds.unionBySize(1,2);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    // check if 3 and 7 belong to same set/component or not
    if(ds.findUltimateParent(3)==ds.findUltimateParent(7)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    ds.unionBySize(3,7);

    // check if 3 and 7 belong to same set/component or not
    if(ds.findUltimateParent(3)==ds.findUltimateParent(7)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    ds.displayGraph();

    return 0;
}
