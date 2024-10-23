

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define long long long long

long long n, m;
long long sv, ev;
vector<vector<long long>> g;
stack<long long> st;
vector<bool> vis,stackmeinhaikya;
vector<long long> parent;

bool dfs(long long start){
    vis[start] = 1;
    st.push(start);
    stackmeinhaikya[start] = 1;
    for(auto it : g[start]){
        if(!vis[it]){
            if(dfs(it)) return true;
        }
        else if(stackmeinhaikya[it] == true){
            st.push(it);
            return true;
        }

    }
    st.pop();
    stackmeinhaikya[start] = 0;
    return false;
}
bool visitALL(){
    for(long long i = 1;i<=n;i++){
        if(!vis[i] && dfs(i) == true) return true;
     }

     return false;
}
long long32_t main(){
    cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1,0);
    parent.resize(n + 1);
    vector<long long> ans;
    stackmeinhaikya.resize(n+1,0);
    for(long long i = 0;i<m;i++){
        long long a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
if(visitALL()==false){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
    }
    long long t = st.top();
    st.pop();
    ans.push_back(t);
    while(st.top() != t){
        ans.push_back(st.top());
        st.pop();
    }
    ans.push_back(t);
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto it :ans){
        cout<<it<<" ";
    }

    
    
}