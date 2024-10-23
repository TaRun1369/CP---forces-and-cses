#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>k>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++) cin>>v[i];

        sort(v.rbegin(),v.rend());
        long long one = 0,ans = 0;
        for(long long i = 1;i<n;i++){
            // if(v[i] == 1) one++;
            // else{
                ans += v[i] + v[i] - 1;
            // }
        }
        cout<<ans<<endl;

    }
}