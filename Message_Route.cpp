#include<bits/stdc++.h>
using namespace std;

vector<long long> adj[100001];
long long dist[100001];
bool vis[100001];
long long par[100001];
long long n,m;
vector<long long> path;

bool bfs(){
    bool ans = false;
    // priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>> pq;
    queue<long long> q;
    q.push(1);
    dist[1] = 1;
    vis[1] = 1;

    
    while(!q.empty()){
        long long node = q.front();
        q.pop();

        if(node == n){ ans = true;
            break;
        }

        for(long long child : adj[node]){
            if(!vis[child]){
                q.push(child);
                dist[child] = dist[node] + 1;
                vis[child] = true;
                par[child] = node;

            }
        }
    }
    if(ans == true){
    path.assign(dist[n],0);
    for(long long i = dist[n] -1;i>=0;i--){
        path[i] = n;
        n = par[n];
    }
    }

    return ans;

}
long long main(){
    cin>>n>>m;

    for(long long i = 0;i<m;i++){
        long long a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    if(bfs() == false){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<path.size()<<endl;
        // reverse(path.begin(),path.end());
        for(auto it : path){
            cout<<it<<" ";
        }
    }
}