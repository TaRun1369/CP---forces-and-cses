



#include <bits/stdc++.h>

using namespace std;



long long main() {
    long long t;
    cin >> t;

    while (t--) {
       long long n;
       cin>>n;
        vector<long long> v(n);

        for(long long i = 0;i<n;i++) cin>>v[i];

        long long ans = 0,sum = 0,maxi = 0;

        // vector<pair<long long,long long>> vp;

        for(long long i = 0;i<n;i++){
            sum += v[i];
            maxi = max(v[i],maxi);
            long long remsum = sum - maxi;
            if(remsum == maxi) ans++;
        }
        // if(v[0] == 0) ans++;
        cout<<ans<<endl;
    }
    return 0;
}

