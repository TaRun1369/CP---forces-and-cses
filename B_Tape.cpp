    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;


    long long main() {
        // long long tc;
        // cin>>tc;
        // // long long m = 1e9 + 7;
        // while(tc--){
           long long n,m,k;
           cin>>n>>m>>k;
          vector<long long> v(n);
          for(long long i = 0;i<n;i++) cin>>v[i];

          vector<long long> gap;
          for(long long i = 0;i<n-1;i++){
            gap.push_back(v[i+1] - v[i] - 1);
          }
          sort(gap.rbegin(),gap.rend());
          long long ans = v[n-1] - v[0] + 1;
        //   cout<<"ans at  k - 1 - "<<ans<<endl;
          for(long long i = 0;i<k-1;i++){
            ans -= gap[i];
          }
          cout<<ans<<endl;
          
        // }
    
    
    }