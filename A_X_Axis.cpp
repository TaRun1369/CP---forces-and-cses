#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long tc;
    cin>>tc;
    while(tc--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans = long long_MAX;
        for(long long i = 1;i<11;i++){
            // cout<<(i == 5)<<endl;
            long long sum = abs(a-i) + abs(b-i) + abs(c - i);
            // cout<<sum<<endl;
            ans = min(sum,ans);
        }
        cout<<ans<<endl;
    }
}