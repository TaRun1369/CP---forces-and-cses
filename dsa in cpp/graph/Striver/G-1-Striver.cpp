#include <iostream>
#include<vector>

using namespace std;



int main(){
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1];
    for(int i= 0;i<m;i++){
        // adjcency matrix
        //space = O(N^2)
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;// if weighted graph then 1 ki jaghah weight ka value aayega
        adj[v][u] = 1;
    }
    
    vector<int>adjList[n+1];// int replace by pair for weighted graph
    for(int i = 0;i<m;i++){
        // adjacency list
        int l,k;
        cin>>l>>k;
        adjList[l].push_back(k);
        adjList[k].push_back(l);// if directed graph ye line nhi aayegi
        // space complexity O(no. of edges)
        
        
        // adj - List mein agar weight dalne hai toh pairs store karenge int ki jaghah
    }
    return 0;
    
    
}