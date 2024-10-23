
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;



long long main() {
    long long tc;
    cin >> tc;
    while (tc--) {
        long long n;
        cin>>n;
        unordered_map<long long,long long> mp;
        long long ans = 0;
        for(long long i = 0;i<n;i++){
            // cout<<"i "<<i<<endl;
            long long x;
            cin>>x;
            long long data = log2(x);
            if(pow(2,data) == x){
                if(mp.find(x) != mp.end()) ans += mp[x];
            }
            else{
                for(long long j = x;j>= pow(2,data);j--){
                    if(mp.find(j) != mp.end())
                    ans += (mp[j]);
                }
                for(long long j = x+1;j< pow(2,data+1);j++){
                    if(mp.find(j) != mp.end())
                    ans += (mp[j]);
                }
            }
            mp[x]++;
            // cout<<"ans - " <<ans<<endl;
        }

        cout<<ans<<endl;
    }
    return 0;
}