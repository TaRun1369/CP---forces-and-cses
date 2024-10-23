    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    long long main() {
        long long t;
        cin>>t;
        while(t--){
            long long n,k;
            cin>>n>>k;
            long long i = 1;
            long long j = k;
            long long ans = n;
            for(long long i = 1;i<= sqrt(n);i++){
                if(n%i==0 && (n/i <= k)){
                    // ans = minll(i,ans);.
                    if(ans > i) ans = i;
                    // break;
                }
            }
            cout<<ans<<endl;
        }
    }


