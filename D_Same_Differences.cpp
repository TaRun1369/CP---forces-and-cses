    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;
 
    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
          long long n;
          cin>>n;
          vector<long long> v(n);
          for(long long i = 0;i<n;i++){
            cin>>v[i];
          }
          long long ans = 0;
          unordered_map<long long,long long> mp;
          for(long long i= 0;i<n;i++){
            if(mp.find(v[i] - i) != mp.end()){
                ans += mp[v[i] - i];
            }
            mp[v[i] - i]++;

          }
          cout<<ans<<endl;
        }
    
    
    }