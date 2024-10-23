    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    long long main() {
        long long t;
        cin>>t;
        while(t--){
           long long n;
           cin>>n;
           vector<long long> v(n);
           for(long long i = 0;i<n;i++){
            cin>>v[i];
           }
           long long sum = accumulate(v.begin(),v.end(),0ll);
           long long si = 0,ei = 0;
           long long starti = 0,flag = 0;
           long long ans = 0,maxi = 0;
           long long i = 0;
            for(;i<n;i++){
                ans += v[i];
                // maxi = max(maxi,ans);
                if(maxi < ans){
                    si = starti;
                    ei = i;
                    maxi = ans;
                }
                if(ans <= 0){
                    ans = 0;
                    starti = i+1;
                }
            }
            // cout<<maxi<<" "<<sum<<endl;
            if(maxi >= sum){
                if(si == 0 && ei == n-1)
                 cout<<"YES"<<endl;
                 else cout<<"NO"<<endl;
                
            }
            else{
                cout<<"YES"<<endl;
            }
            
        }
        return 0;
    }
