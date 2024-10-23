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
           vector<long long> v(n*(n-1)/2);
           long long maxi = 1e9;
           for(long long i = 0;i<(n*(n-1)/2);i++){
            cin>>v[i];
            // maxi = max(maxi,v[i]);
           }
           map<long long,long long> mp;
           for(auto it : v){
            mp[it]++;
           }
        //    vector<long long> ans;
        //    for(auto it : v){
        //     if(mp[it] > 0){
        //         continue;
        //     }
        //     else{
        //         cout<<"eklsw -" <<it<<endl;
        //         ans.push_back(it);
        //         mp[it]++;
        //     }
        //    }
        //    cout<<ans.size()<<endl;
        //    while(ans.size() <= n-1)
        //     ans.push_back(maxi);
        //     for(auto it : ans) cout<<it<<" ";
        //     cout<<endl;
        long long count = 0;
        long long t = n-1;
            for(auto it : mp){
                
                while(it.second > 0){
                    cout<<it.first<<" ";
                    count++;
                    it.second -= t;
                    t--;
                }
                
            }
            while(count != n){
            cout<<maxi<<" ";
            count++;
            }
            cout<<endl;
           
        }
    
    
    }