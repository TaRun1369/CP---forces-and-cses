#include<bits/stdc++.h>
using namespace std;
long long n,m;
vector<vector<long long>> g;
vector<pair<long long,long long>> monster;
map<pair<long long,long long>,pair<long long,long long>> parMap;
pair<long long,long long> si,se;
vector<pair<long long,long long>> moves = {{1,0},{-1,0},{0,1},{0,-1}};

bool isvalid(long long x,long long y,long long timer){
    if(x < 0 || y < 0 || x >= n || y >= m){
        return false;
    }
    if(g[x][y] <= timer){
        return false;
    }

    return true;
}

bool isescape(long long x,long long y ,long long timer){
    if(!isvalid(x,y,timer)) return false;

    if(x == 0|| y == 0 || x == n-1|| y == m-1) return true;
    return false;
}




void preprocess(){
    // multi source bfs
    queue<pair<pair<long long,long long>,long long>> q;
    for(auto it : monster){
        q.push({it,0});
    }

    while(!q.empty()){
        auto top = q.front();
        q.pop();
        long long cx = top.first.first;
        long long cy = top.first.second;
        long long timer = top.second;
        timer++;
        for(auto it : moves){
            long long tx = cx + it.first;
            long long ty = cy + it.second;
            if(isvalid(tx,ty,timer)){
                g[tx][ty] = timer;
                q.push({{tx,ty},timer});
            }
        }

    }
}

bool bfs(){
    queue<pair<pair<long long,long long>,long long>> q;
    q.push({si,0});
    parMap[si] = {-1,-1};

    while(!q.empty()){
        auto t = q.front();
        q.pop();
        long long cx = t.first.first;
        long long cy = t.first.second;
        long long timer = t.second;
        timer++;

        for(auto it : moves){
            long long tx = cx + it.first;
            long long ty = cy + it.second;
            if(isescape(tx,ty,timer)){
                parMap[{tx,ty}] = {cx,cy};
                se = {tx,ty};return true;
            }
            if(isvalid(tx,ty,timer)){
                g[tx][ty] = timer;
                parMap[{tx,ty}] = {cx,cy};
                q.push({{tx,ty},timer});
            }
        }
       
    }
     return false;
}




long long main(){
    cin>>n>>m;

    g.resize(n);
    for(long long i = 0;i<n;i++){
        g[i].resize(m);
    }

    for(long long i = 0;i<n;i++){
        for(long long j = 0;j<m;j++){
            g[i][j] = long long_MAX;
        }

    }
    for(long long i = 0;i<n;i++){
        for(long long j = 0;j<m;j++){
            char c;
            cin>>c;

            if(c == '#'){
                g[i][j] = 0;

            }
            else if(c == 'M'){
                g[i][j] = 0;
                monster.push_back({i,j});
            }
            else if(c == 'A'){
                g[i][j] = 0;
                si = {i,j};
            }
            else{
                g[i][j] = long long_MAX;
            }
        }
    }

    if(si.first == 0 || si.second == 0 ||si.first == n-1||si.second == m - 1){
        cout<<"YES"<<endl;
        cout<<0<<endl;
        return 0;
    }

    preprocess();

    if(!bfs()){
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    pair<long long,long long> pathv = se,parent = parMap[pathv],ed = {-1,-1};
    vector<char> ans;
    while(pathv != ed){
        if(pathv.second - parent.second == 1 && pathv.first - parent.first == 0){
            ans.push_back('R');
        }
        if(pathv.second - parent.second == -1 && pathv.first - parent.first == 0){
            ans.push_back('L');
        }
        if(pathv.second - parent.second == 0 && pathv.first - parent.first == 1){
            ans.push_back('D');
        }
        if(pathv.second - parent.second == 0 && pathv.first - parent.first == -1){
            ans.push_back('U');
        }
        pathv = parent;
        parent = parMap[parent];
    }

    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto it : ans){
        cout<<it;
    }





}