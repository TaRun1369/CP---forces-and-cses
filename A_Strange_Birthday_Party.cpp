    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;


    long long main() {
        long long tc;
        cin>>tc;
        // long long m = 1e9 + 7;
        while(tc--){
           long long n,m;
           cin>>n>>m;
           vector<long long> ip(n),c(m);
           for(long long i = 0;i<n;i++) cin>>ip[i];
           for(long long i = 0;i<m;i++) cin>>c[i];
           long long ans = 0;
           sort(ip.rbegin(),ip.rend());
        //    cout<<"ikput"<<endl;
        //    for(auto it : ip) cout<<it<<" ";
        //    cout<<endl;
           vector<long long> mark(m,1);
            for(auto it : ip){
                // cout<<"input - "<<it<<endl;
                it--;
                long long mini = c[it];
                // cout<<"mini 1 "<<mini<<endl;
                long long l = upper_bound(mark.begin(),mark.end(),0) - mark.begin();
                // cout<<"upper index " <<l<<endl;
                // cout<<"data - "<<c[l]<<endl;
                mini = min(mini,c[l]);
                if(mini == c[l] && mini != c[it]) mark[l] = 0;
                // cout<<"mini final "<<mini<<endl;
                ans += mini;
            }
            cout<<ans<<endl;
        }
    
    
    }