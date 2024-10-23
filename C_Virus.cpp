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
          vector<long long> ip(m);
          for(long long i=0;i<m;i++){
              cin>>ip[i];
          }
          sort(ip.begin(),ip.end());
            long long left = 1;
            long long right = n;
        vector<long long> gap;
        long long ans = 0;
        gap.push_back(ip[0] - left + right - ip[m-1]);
          for(long long i=1;i<m;i++){
            gap.push_back(ip[i] - ip[i-1] - 1);
          }

          sort(gap.rbegin(),gap.rend());


          long long tim2 = 0;
          for(auto it : gap){
            // cout<<"gap - "<<it<<endl;
            // cout<<"sub "<<2*tim2<<endl;
            if(it - 2*tim2 == 1){
                // cout<<"yede"<<endl;
                ans += 1;
            }
            else{
                // cout<<"weda"<<endl;
                if(it-2*tim2 > 1)
                ans += (it-2*tim2 -1);
                // cout<<"ans - "<<ans<<endl;
            }
            tim2+=2;
          }

          cout<<n - ans<<endl;;

        }
    
    
    }