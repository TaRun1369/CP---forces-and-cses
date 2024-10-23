#include<bits/stdc++.h>
using namespace std;

long long ans = long long_MAX;
long long recur(long long ind,long long m,vector<string> &v,string &vis,string &goal){
    if(ind == 0 || vis == goal){
        return 1;
    }

    // take 
    for(long long i = 0;i<m;i++){
        if(v[ind][i] == 'o') {
            vis[i] = 'o';
        }
    }
    recur(ind +1,m,v,vis,goal);



}

long long main(){
    long long n,m;
    cin>>n>>m;
     vector<string> vis;
    for(long long i = 0;i < n;i++){
        string s;
        cin>>s;
        vis.push_back(s);
    }
    string visi = "";
    for(long long i = 0;i < m;i++){
        visi += 'o';
        goal += 'x';
    }
    recur(n-1,m,vis,visi,goal);
    cout<<ans<<endl;
}
