#include <iostream>
#include<unordered_map>
#include<list>
#include<vector>

using namespace std;

template<typename t>
class graph{
    public:
    unordered_map<t,list<t>> adj;

    void addEdge(t u,t v,bool direction){
        // direction == 0 ->undirected graph
        // direction == 1 -> directed graph
        
        
        // creating a edge from u to v
          adj[u].push_back(v);
          
          if(direction == 0){
                adj[v].push_back(u);
          }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
    
    vector<vector<int>> printAdjacency(int n,int m,vector<vector<int>> &edges){
        vector<int> ans[n];
        for(int i = 0;i<m;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            ans[u].push_back(v);
            ans[v].push_back(u);
        }
        
        vector<vector<int>> adj[n];
        for(int i =0;i<n;i++){
            adj[i].push_back(i);
            
            
            for(int j = 0;j<ans[i].size();j++){
            adj[i].push_back(ans[i][j]);
            }
        }
        return adj;
        
    }
    
    
    
    
};

int main(){
    
    int n;
    cout<<" Enter the number of nodes "<<endl;
    cin>>n;
    
    int m;
    cout<<" Enter the number of edges "<<endl;
    cin>>m;

    graph<int> g;
    vector<vector<int>> edges;
    

    for(int i = 0;i<m;i++){
        
        int u,v;
        cin>>u>>v;
        edges[i].push_back(u);
        edges[i].push_back(v);
        
        g.addEdge(u,v,0);
        
    }

    // printing graph
    g.printAdjList();
    
    
    
    vector<vector<int>> a = g.printAdjacency(n,m,edges);
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<a[i].size();j++){
            cout<<a[i][j]<<endl;
        }
    }

}