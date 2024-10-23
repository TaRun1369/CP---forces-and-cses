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
          // for(long long i = 0;i<n;i++){
          //   long long j = v[i] - i - 2;
          //   // cout<<i+1<<"  - "<<j+1<<endl;
          //   while(j < i){
          //     j += v[i];
          //   }
          //   for(;j < n;j+=v[i]){
          //     // if(j < 0) continue;
          //       if(v[i]*v[j]*1ll == i+j+2){
          //         // cout<<"yaha"<<endl;
          //           // cout<<"i - "<<i+1<<endl;
          //           // cout<<"j - "<<j+1<<endl;

          //           ans++;

          //       }
          //   }
          // }

          for(long long i = 0;i<n;i++){
            for(long long j = i+1;j<n;j++){
              if(v[i]*v[j]*1ll == i+j+2){
                // cout<<"i - "<<i+1<<endl;
                // cout<<"j - "<<j+1<<endl;

                ans++;

              }
            }
          }

        cout<<ans<<endl;
        }
    
    
    }