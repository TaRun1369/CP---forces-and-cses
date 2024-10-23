    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;
 
    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
          long long n,m;
          cin>>n>>m;
          map<long long,long long> mp;
          for(long long i = 0;i<n;i++){
            long long x;
            cin>>x;
            mp[x%m]++;
          }
          if(m == 1){ cout<<1<<endl;continue;}
          long long ans = 0;
          if(mp.find(0) != mp.end()){
           ans = 1;
            mp[0] = 0;
          }
          for(auto it : mp){
            if(it.first == 0 || it.second <= 0) continue;
            // cout<<it.first<<" - it - "<<it.second<<endl;

            long long dusra = m - it.first;
            long long mini = min(mp[dusra],it.second) + 1;
            ans++;
            mp[dusra] -= mini;
            mp[it.first] -= mini;
            // cout<<"dusra - "<<dusra<<endl;
            // cout<<mini<<endl;
            // cout<<ans<<endl;
            
          }
    
          for(auto it : mp){
            if(it.second > 0){
                ans += it.second;
            }
          }
          cout<<ans<<endl;
        }
    
    
    }