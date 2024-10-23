    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
        long long n,a,b;
        cin>>n>>a>>b;
            long long ans = 0;
            long long two = n/2;
            ans += two * b;
            long long one = n%2;
            ans += one*a;
            ans = min(ans,n*a);
            cout<<ans<<endl;
        }

        
    }
