#include<bits/stdc++.h>
using namespace std;
set<string> ans;
void recur(long long i,string s,vector<long long> &vis,string &temp){
    if(temp.size() == s.size()){
        // cout<<temp<<endl;
        ans.insert(temp);
    }

    for(long long i = 0;i<s.size();i++){
        if(!vis[i]){
        temp += s[i];
        vis[i] = 1;
        recur(i,s,vis,temp);
        temp.pop_back();
        vis[i] = 0;
        }
    }

    
}
long long main(){
string s;
cin>>s;
string t = "";
vector<long long>vis(s.size(),0);
recur(0,s,vis,t);
cout<<ans.size()<<endl;
for(auto it : ans){
    cout<<it<<endl;
}

}