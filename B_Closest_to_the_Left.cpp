#include <bits/stdc++.h>
using namespace std;
using ll = long long;



long long main() {
    long long n,k;
    cin>>n>>k;
    vector<long long> v(n);
    for(long long i = 0;i<n;i++) cin>>v[i];

    for(long long i = 0;i<k;i++){
        long long x;
        cin>>x;
        long long l = upper_bound(v.begin(),v.end(),x) - v.begin();
        // if(v[l] == x) cout<<l+1<<endl;
        cout<<l<<endl;
    }

    
}