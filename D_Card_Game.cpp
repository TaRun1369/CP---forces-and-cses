

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

long long main() {
    

   long long n;
   cin>>n;
 
   while(n--){
    long long c;
    cin>>c;
    char ch;
    cin>>ch;
    unordered_map<char,vector<string>> mp;
    vector<string> trump;
    for(long long i = 0;i<2*c;i++){
        string s;
        cin>>s;
        if(s[1] != ch)
        mp[s[1]].push_back(s);
        else{
            trump.push_back(s);
        }
    }
    sort(trump.rbegin(),trump.rend());

        vector<pair<string,string>> ans;
        for(auto it : mp){
            vector<string> v = it.second;
            sort(v.begin(),v.end());
            // sort(it.second.begin(),it.second.end());
            // char storr = it.first;
            // mp.erase(it.first);
            // mp.insert(  {storr,v});
            mp[it.first] = v;
            // for(auto it1 : v) cout<<it1<<" ";
            if(v.size()>1){
                // long long so = it.second.size()%2;
                for(long long i = 0;i<v.size()-1;i+=2){
                    ans.push_back({v[i],v[i+1]});  
                    
                }    
            }
        }

    long long flag = 0;
    long long ts = trump.size() -1;
        for(auto it : mp)
        {
            // for(auto it1 : it.second) cout<<it1<<" ";
            // cout<<endl;
            if(it.second.size()%2 ==1)
            {
                if(ts<0)
                {
                    cout<<"IMPOSSIBLE"<<endl;
                    flag = 1;
                    break;
                }
                string data = it.second[it.second.size() - 1];
                ans.push_back({data,trump[ts--]});
            }
        }

        if((ts+1)%2 ==1)  {
            // cout<<"ghanta "<<endl;
                    cout<<"IMPOSSIBLE"<<endl;
                    flag = 1;
                    
                }
        while(ts>=0)
        {
                ans.push_back({trump[ts],trump[ts-1]});
                ts-=2;
        }
    if(flag == 0){
        // cout<<ans.size()<<endl;
        for(auto it : ans)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }

   }

}

