
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;



long long main() {
    long long tc;
    cin >> tc;
    while (tc--) {
        long long n,x,y;
        cin>>n>>x>>y;
        map<long long,map<long long , long long>> mp;
        long long ans = 0;
        vector<long long> v(n);
        for(long long i= 0;i<n;i++){
            long long x;
            cin>>v[i];
        }

        for(long long i = 0;i<n;i++){
            ans += mp[(x - v[i]%x)%x][v[i]%y];
            mp[v[i]%x][v[i]%y]++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}