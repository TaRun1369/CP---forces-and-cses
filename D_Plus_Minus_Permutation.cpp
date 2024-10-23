    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;
 long long lcm(long long a, long long b) {
    return std::abs(a * b) / std::gcd(a, b);
}
    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
          long long n,x,y,ans = 0;
          cin>>n>>x>>y;
          long long maxi = 0,mini = 0;

        //   for(long long i = 0;i<n;i++){
        //     // long long a;
        //     // cin>>a;
        //     if(i + 1 % x == 0 && i + 1 % y != 0){
        //         maxi++;
        //     }
        //     else if(i + 1 % x != 0 && i + 1 % y == 0){
        //         mini++;
        //     }
        //     else continue;
        //   }

        maxi = n/x;
        mini = n/y;
        long long com = n/(lcm(x,y));
        // cout<<"com - "<<com<<endl;
        maxi -= com;
        mini -= com;
            long long j = n - maxi;
        //   while(maxi--){
        //     ans += (j);
        //     j--;
        //   }
        //   cout<<"yaha - "<<ans<<endl;
        //   j = 1;
        //   while(mini--){
        //     ans -= j;
        //     j++;
        //   }
        // cout<<"n - "<<n<<"  j - "<<j<<"  maxi - "<<maxi<<"  mini - "<<mini<<endl;
        // mini++;
        ans += ((n)*1LL*(n+1))/2;
        ans -= ((j)*1LL*(j+1))/2;
        ans -= ((mini)*1LL*(mini + 1))/2;
        cout<<ans<<endl;
        }
    
    
    }